using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("inch 단위를 입력하세요 : ");
            double inch = double.Parse(Console.ReadLine());
            Console.WriteLine(inch + "inch는 " + (inch * 2.54) + "cm입니다.");

            Console.WriteLine("kg단위를 입력하세요 : ");
            double kg = double.Parse(Console.ReadLine());
            Console.WriteLine(kg + "kg은" + (kg * 2.20462262) + "파운드 입니다.");

            Console.WriteLine("원의 반지름을 입력하세요 : ");
            double ra = double.Parse(Console.ReadLine());
            Console.WriteLine("원의 둘레는"+(2*3.14*ra));
            Console.WriteLine("원의 넓이는"+(ra*ra*3.14));
        }
    }
}
