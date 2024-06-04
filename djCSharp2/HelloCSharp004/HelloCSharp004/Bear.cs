using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    //곰이 동물이라고 한다면...
    //어떻게 먹는 지 어떻게 싸우는 지 반드시 정의를 해줘야 함
    //왜냐? Animal 클래스에 eat과 fight가 추상 메서드이기 때문이다.
    public class Bear : Animal
    {
        public override void run()
        {
            Console.WriteLine("곰은 도망을 가지 않습니다.");
            //base.run();
        }
        public override void eat()
        {
            Console.WriteLine("큰 손으로 퍼먹습니다.");
        }

        public override void fight()
        {
            Console.WriteLine("싸대기 한 방~");
        }
    }
}
