using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    //abstract 클래스 = 추상 클래스
    //자신 가지고 직접 인스턴스 못 만듦
    //즉 Animal a = new Animal() 이런 거 못 함
    //대신 Animal을 상속받은 클래스에서는 메서드 구체화 가능하고
    //인스턴스도 만들 수 있음
    public abstract class Animal
    {
        public string name { get; set; }
        public int age { get; set; }
        public void sleep() //기본으로 구현된 기능
        {
            Console.WriteLine(name+" : 잠을 잡니다.");
        }
        public abstract void eat(); //abstract가 붙은 건
        //상속받은 클래스마다 모두 각자 다르게 eat을 구현해야 하고
        //또한 eat을 무조건 구현해야 함!!!
        public abstract void fight();
        public virtual void run() //Animal을 상속받았다면 오버라이드 가능
        {
            Console.WriteLine(age+"살 답게 도망갑니다.");
        }
    }
}
