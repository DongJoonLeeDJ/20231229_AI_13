using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    public class Dragon : IFlyFantasy
    {
        public void flapWings(int count)
        {
            Console.WriteLine("대지가 " +count+"번 흔들립니다.");
        }

        public void fly()
        {
            Console.WriteLine("하늘을 가릅니다.");
        }

        public void magicArrow(int count, string name)
        {
            for(int i =0; i < count; i++)
                Console.WriteLine(name+"발사");
        }

        public void talk(string message)
        {
            Console.WriteLine("(근엄하게)"+message);
        }
    }
}
