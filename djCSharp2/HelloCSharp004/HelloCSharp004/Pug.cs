using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    public class Pug : Dog
    {
        public override void Bark()
        {
            base.Bark();
            Console.WriteLine("단두종이라서 더울 땐 헥헥거리기만 해요");
        }
    }
}
