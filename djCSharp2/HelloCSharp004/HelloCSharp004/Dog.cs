using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    public class Dog : Animal
    {
        //virtual : 자손 클래스가 해당 메서드를 오버라이드 하겠다는 의미
        //오버라이드 한다는 의미 : 덮어쓰겠단 의미
        public virtual void Bark()
        {
            Console.WriteLine("멍멍 짖습니다.");
        }

        public override void eat()
        {
            Console.WriteLine("개 답게 먹습니다.");
        }

        public override void fight()
        {
            Console.WriteLine("뭅니다.");
        }
    }
}
