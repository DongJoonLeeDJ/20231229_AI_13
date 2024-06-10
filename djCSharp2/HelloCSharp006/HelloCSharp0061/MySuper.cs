using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0061
{
    public class MySuper
    {
        public string name { get; set; }
        public virtual void print(string msg)
        {
            Console.WriteLine("이름:"+name+",메시지:"+msg);
        }
        //정적 멤버(static)은 virtual 못 쓴다.
        //public static virtual void printer()
        //{

        //}
    }
}
