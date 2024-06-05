using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    public class Zebra : Horse
    {
        public override void run()
        {
            Console.WriteLine("갈기와 줄무늬를 보여주며 달립니다.");
        }
        public void growCheckPattern()
        {
            Console.WriteLine("체크 무늬를 길러요");
        }

    }
}
