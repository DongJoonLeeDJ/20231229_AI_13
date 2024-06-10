using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0061
{
    //java 스타일로 만든 싱글톤
    public class MyBase : MySuper
    {
        private static MyBase instance = null;
        private MyBase() { }//생성자를 private화 함
        public static MyBase getInstance()
        {
            if (instance == null)
                instance = new MyBase();
            return instance;
        }
        public override void print(string msg)
        {
            Console.WriteLine("----");
            base.print(msg);
            Console.WriteLine("----");
        }
    }
}
