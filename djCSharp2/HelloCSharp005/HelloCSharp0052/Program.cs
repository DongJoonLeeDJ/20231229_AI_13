using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Unicorn u = new Unicorn ();

            //인터페이스도 다형성 적용됨
            //추상클래스와 마찬가지로 단독으로 인스턴스 못 만듦
            //IFly ii = new IFly();

            IFly u1 = new Unicorn();
            List<IFantasy> fantasyCreatures = new List<IFantasy>();
            fantasyCreatures.Add(u);
            fantasyCreatures.Add(new Dragon());
            fantasyCreatures.Add(new WareWolf());
            fantasyCreatures.Add(new Undine());

            Horse h = new Unicorn();
            Horse h2 = new Zebra();
            Zebra z = new Zebra();
            //Horse hh = new Horse();
            z.run();
            z.growCheckPattern();

            h2.run();
            (h2 as Zebra).growCheckPattern();

            List<Horse> horses = new List<Horse>();
            horses.Add(h);
            horses.Add(h2);
            horses.Add(z);



        }
    }
}
