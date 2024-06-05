using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    public class Undine : IFly, IFantasy
    {
        public void flapWings(int count)
        {
            return; //운디네는 날개가 없다.
        }

        public void fly()
        {
            Console.WriteLine("정령의 기운으로 날아 다닙니다.");
        }

        public void magicArrow(int count, string name)
        {
            name = "물";
            Console.WriteLine(name+"타입 미사일을 "+count+"번 발사");
            //Console.WriteLine("물 타입 미사일을 "+count+"번 발사");
        }
    }
}
