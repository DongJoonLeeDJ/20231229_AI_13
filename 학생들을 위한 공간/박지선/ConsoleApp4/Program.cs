using System;
using System.Collections.Generic;
using System.Data.SqlTypes;
using System.Linq;
using System.Runtime.InteropServices;
using System.Security.AccessControl;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (false)
            {
                //인치단위
                double inch = 2.54;
                Console.WriteLine("인치단위입력");
                int a = int.Parse(Console.ReadLine());
                double b = a * inch;
                Console.WriteLine(a + "인치는 " + b + "센티미터");
                //파운드단위
                double kg = 2.20462262;
                Console.WriteLine("kg단위 입력");
                int c = int.Parse(Console.ReadLine());
                double d = c * kg;
                Console.WriteLine(c + "킬로그램은 " + d + "파운드");
                //반지름
                Console.WriteLine("반지름입력");
                int r = int.Parse(Console.ReadLine());
                const double PI = 3.14;
                Console.WriteLine("원의 둘레는 " + 2 * PI * r + ", 원의 넓이는" + r * r * PI);
            }
            if (false)
            {
                int i = 0;
                while(i<10)
                {
                    Console.WriteLine("출력");
                    i++;
                }
            }
            if (false)
            {
                for(int i = 1; i<9; i++)
                {
                    
                    for (int j = 9; j>i; j--)
                    {
                        Console.Write(" ");
                    }
                    for (int j = 0; j<i; j++)
                    {
                        Console.Write("*");
                    }
                    for (int j = 1; j<i; j++)
                    {
                        Console.Write("*");
                    }
                    Console.WriteLine("");
                }
            }
            if(false)
            {
                int max,min;
                int[] nums = new int[5];
                for(int i = 0; i<5; i++)
                {
                    Console.WriteLine("숫자 입력");
                    nums[i]=int.Parse(Console.ReadLine());
                    
                }
                max = nums[0];
                min = nums[0];
                for(int i = 0; i<5; i++)
                {
                    if (max < nums[i])
                    {
                        max = nums[i];
                    }
                    if (min > nums[i])
                    {
                        min = nums[i];
                    }
                    
                }
                Console.WriteLine("최댓값: "+max+" 최솟값: "+min);

            }
            
        }
    }
}
