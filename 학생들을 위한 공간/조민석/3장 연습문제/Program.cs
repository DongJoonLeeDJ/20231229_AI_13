using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //7번
            Console.WriteLine("입력받은 년도");
            int year = int.Parse(Console.ReadLine());
            if (year % 12 == 0)
                Console.WriteLine("원숭이");
            else if (year % 12 == 1)
            {
                Console.WriteLine("닭");
            }
            else if (year % 12 == 2)
                Console.WriteLine("개");
            else if (year % 12 == 3)
                Console.WriteLine("돼지");
            else if (year % 12 == 4)
                Console.WriteLine("쥐");
            else if (year % 12 == 5)
                Console.WriteLine("소");
            else if (year % 12 == 6)
                Console.WriteLine("범");
            else if (year % 12 == 7)
                Console.WriteLine("토끼");
            else if (year % 12 == 8)
                Console.WriteLine("용");
            else if (year % 12 == 9)
                Console.WriteLine("뱀");
            else if (year % 12 == 10)
                Console.WriteLine("말");
            else if (year % 12 == 11)
                Console.WriteLine("양");

            //8번
            Console.WriteLine("현재 월 입력");
            int month = int.Parse(Console.ReadLine());
            if(month == 12 || 1 <= month && month <=2)
                Console.WriteLine("겨울");
            else if(month >=3 && month <=5)
                Console.WriteLine("봄");
            else if(month <=6 && month <=8)
                Console.WriteLine("여름");
            else if(month <= 9 && month <=11)
                Console.WriteLine("가을");

            //9번
            Console.WriteLine("값 입력");
            int x = int.Parse(Console.ReadLine());
            if(x > 10 && x < 20)
            {
                Console.WriteLine("조건에 맞습니다.");
            }else
                Console.WriteLine("조건에 맞지 않습니다.");

            //10번
            int x1, y1;
            Console.WriteLine("x입력");
            x1 = int.Parse(Console.ReadLine());
            Console.WriteLine("y입력");
            y1 = int.Parse(Console.ReadLine());

            if(x1>4 && y1 > 2)
            {
                Console.WriteLine(x1*y1);
            }else
                Console.WriteLine();

            //11번
            Console.WriteLine("학년을 입력하세요");
            int level = int.Parse(Console.ReadLine());
            switch (level)
            {
                case 1:
                    Console.WriteLine("수강해야 하는 전공 학점 : 12 학점");
                    break;
                case 2:
                    Console.WriteLine("수강해야 하는 전공 학점 : 18 학점");
                    break;
                case 3:
                    Console.WriteLine("수강해야 하는 전공 학점 : 10 학점");
                    break;
                case 4:
                    Console.WriteLine("수강해야 하는 전공 학점 : 18 학점");
                    break;
                default:
                    break;
            }
        }
    }
}
