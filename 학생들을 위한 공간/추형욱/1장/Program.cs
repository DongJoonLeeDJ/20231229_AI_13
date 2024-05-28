using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace testtest1
{
    internal class Program
    {
        static void Main(string[] args) {


            double inch = 2.54;
            Console.WriteLine("인치값을 입력하세요");
            int.TryParse(Console.ReadLine(), out int n);
            Console.WriteLine(n+"인치는"+inch*n+"cm입니다");

            double lb = 2.20462262;
            Console.WriteLine("kg값을 입력하세요");
            int.TryParse(Console.ReadLine(), out int kg);
            Console.WriteLine(kg + "kg은" + kg * lb + "파운드입니다");

            double pi = 3.14;
            Console.WriteLine("반지름을 cm단위로 입력하세요");
            int.TryParse(Console.ReadLine(), out int r);
            Console.WriteLine(r + "의반지름을가진 원의 둘레는" + 2*pi * r + "cm입니다");
            Console.WriteLine(r + "반지름을가진 원의 면적은" +  pi * r*r + "제곱cm입니다");







        }
    }
}
