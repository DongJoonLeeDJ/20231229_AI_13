using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //년도 입력 그 해의 띠 출력 나머지 01234567891011 원숭이닭개돼지쥐소범토끼용뱀말양
            if (false)
            {
                Console.WriteLine("년도 입력");
                int year = int.Parse(Console.ReadLine());
                string ddi = "";
                if (year < 0)
                {
                    Console.WriteLine("잘못된값.");
                }
                else
                {
                    switch (year % 12)
                    {
                        case 0:
                            ddi = "원숭이";
                            break;
                        case 1:
                            ddi = "닭";
                            break;
                        case 2:
                            ddi = "개";
                            break;
                        case 3:
                            ddi = "돼지";
                            break;
                        case 4:
                            ddi = "쥐";
                            break;
                        case 5:
                            ddi = "소";
                            break;
                        case 6:
                            ddi = "호랑이";
                            break;
                        case 7:
                            ddi = "토끼";
                            break;
                        case 8:
                            ddi = "용";
                            break;
                        case 9:
                            ddi = "뱀";
                            break;
                        case 10:
                            ddi = "말";
                            break;
                        case 11:
                            ddi = "양";
                            break;
                        default:
                            Console.WriteLine("머지");
                            return;

                    }
                    Console.WriteLine(year + "년은 " + ddi + "띠");
                }
            }
            //현재 월 입력 계절 출력
            if (false)
            {
                Console.WriteLine("현재 월 입력");
                int month = int.Parse(Console.ReadLine());
                if (month > 0 && month <= 12)
                {
                    switch (month)
                    {
                        case 12:
                        case 1:
                        case 2:
                            Console.WriteLine("겨울");
                            break;
                        case 3:
                        case 4:
                        case 5:
                            Console.WriteLine("봄");
                            break;
                        case 6:
                        case 7:
                        case 8:
                            Console.WriteLine("여름");
                            break;
                        case 9:
                        case 10:
                        case 11:
                            Console.WriteLine("가을");
                            break;

                    }
                }
                else
                { Console.WriteLine("입력오류"); }
            }
            //논리 연산자 사용
            if (false)
            {
                Console.WriteLine("숫자입력");
                int x = int.Parse(Console.ReadLine());
                if (x > 10 && x < 20)
                    Console.WriteLine("조건에 맞습니다.");
            }
            //문제10
            if (false)
            {
                int x, y;
                x = int.Parse(Console.ReadLine());
                y = int.Parse(Console.ReadLine());
                if (x > 4)
                {
                    if (y > 2)
                    {
                        Console.WriteLine(x * y);
                    }
                }
                else
                {
                    Console.WriteLine();
                }
            }
            //문제11
            if (true)
            {
                Console.WriteLine("학년 입력");
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
                        Console.WriteLine("범위오류");
                        break;
                }


            }
        }
    }
}
    

