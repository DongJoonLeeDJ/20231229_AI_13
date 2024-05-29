using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp001
{
    public class Bear : Animal
    {
        //public Bear() { }
        public double kg { get; set; } //곰의 몸무게
        public void hunt()
        {
            Console.WriteLine(kg+"kg의 몸으로 사냥감을 사냥합니다.");
        }
    }
}
