using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    public class WareWolf : IFantasy
    {
        public void magicArrow(int count, string name)
        {
            for(int i = 0; i < count; i++)
                Console.WriteLine("직접 활로 쏩니다.");
        }
    }
}
