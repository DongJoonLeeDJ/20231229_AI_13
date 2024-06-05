using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    //클래스는 다중 상속이 안 됨
    //조부모 클래스, 부모 클래스, 자식 클래스
    //이런 계층적인 상속은 되지만
    //한 번에 2개 이상 상속 불가능
    //C++은 가능하나 이 걸 비권장 문법으로 두고 있음
    //Java도 불가능함
    //public class Unicorn : Horse,Bird
    //대신 인터페이스는 여러 개를 붙일 수 있음
    public class Unicorn : Horse, IFly, IFantasy
    {
        public void flapWings(int count)
        {
            Console.WriteLine(count+"번 날개짓을 합니다.");
            if (count > 100)
                fly();
        }

        public void fly()
        {
            Console.WriteLine("날개짓하여 하늘을 납니다.");
        }

        public void magicArrow(int count, string name)
        {
            if(count>0)
                Console.WriteLine(name+"미사일을 " +count+"번 발사");
        }

        public override void run()
        {
            Console.WriteLine("다그닥 다그닥...");
        }
    }
}
