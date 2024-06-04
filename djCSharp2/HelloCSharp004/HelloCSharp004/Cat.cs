using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    public class Cat : Animal
    {
        public string eyeColor { get; set; }
        public override void eat()
        {
            Console.WriteLine(eyeColor+"색 눈빛을 빛내며 밥을 먹어요");
        }

        public override void fight()
        {
            Console.WriteLine("앞다리로 때려요");
        }
    }
}
