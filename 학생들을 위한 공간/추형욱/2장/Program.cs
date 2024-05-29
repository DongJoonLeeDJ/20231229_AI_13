using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace testtest2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //  7번문제

            Console.Write("태어난 년도를 입력하세요: ");
            int bYear = int.Parse(Console.ReadLine());

            int check = bYear % 12;

            string zodiac = "";

            if (check == 0)
            {
                zodiac = "원숭이";
            }
            else if (check == 1)
            {
                zodiac = "닭";
            }
            else if (check == 2)
            {
                zodiac = "개";
            }
            else if (check == 3)
            {
                zodiac = "돼지";
            }
            else if (check == 4)
            {
                zodiac = "쥐";
            }
            else if (check == 5)
            {
                zodiac = "소";
            }
            else if (check == 6)
            {
                zodiac = "호랑이";
            }
            else if (check == 7)
            {
                zodiac = "토끼";
            }
            else if (check == 8)
            {
                zodiac = "용";
            }
            else if (check == 9)
            {
                zodiac = "뱀";
            }
            else if (check == 10)
            {
                zodiac = "말";
            }
            else if (check == 11)
            {
                zodiac = "양";
            }

            Console.WriteLine($"당신은 {bYear}년에 태어났으므로, 당신의 띠는 '{zodiac}'입니다.");


            //8번문제
            Console.Write("현재 월을 입력하세요 (1-12): ");
            int month = int.Parse(Console.ReadLine());

            string season = "";

            switch (month)
            {
                case 3:
                case 4:
                case 5:
                    season = "봄";
                    break;
                case 6:
                case 7:
                case 8:
                    season = "여름";
                    break;
                case 9:
                case 10:
                case 11:
                    season = "가을";
                    break;
                case 12:
                case 1:
                case 2:
                    season = "겨울";
                    break;
                default:
                    Console.WriteLine("잘못된 입력입니다.");
                    return;
            }

            Console.WriteLine($"현재는 {season}입니다."); 
        
    

//11번문제
Console.Write("학년을 입력하세요: ");
            int level = int.Parse(Console.ReadLine());

            switch (level)
            {
                case 1:
                    Console.WriteLine("수강해야 하는 전공 학점: 12학점");
                    break;
                case 2:
                    Console.WriteLine("수강해야 하는 전공 학점: 18학점");
                    break;
                case 3:
                    Console.WriteLine("수강해야 하는 전공 학점: 10학점");
                    break;
                case 4:
                    Console.WriteLine("수강해야 하는 전공 학점: 18학점");
                    break;
                default:
                    Console.WriteLine("잘못된 입력입니다.");
                    break;
            }




        }
    }
}
