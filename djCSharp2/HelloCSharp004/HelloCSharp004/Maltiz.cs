using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    public class Maltiz : Dog
    {
        public override void Bark()
        {
            //base.Bark(); //조상 클래스의 Bark를 그대로 호출함
            Console.WriteLine("뭔가 귀엽게 멍멍");
        }
    }
}
