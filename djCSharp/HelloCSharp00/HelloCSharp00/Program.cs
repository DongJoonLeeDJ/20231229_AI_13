using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp00
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine = printf랑 유사한 것
            //Console.WriteLine = printf + 맨 끝에 \n이 자동삽입된 것
            Console.WriteLine("Hello World");
            Console.Write("안녕 ");//끝에 \n이 들어가지 않음
            Console.WriteLine("세상!");

            //cw만 적고 tab 키 두 번
            Console.WriteLine(); //괄호 안에 아무 것도 적지 않으면 그냥 \n만 한 것
            Console.WriteLine();//알아서 자동으로 채워줌
            Console.WriteLine();
        }
    }
}
