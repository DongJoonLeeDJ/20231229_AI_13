using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            while (i < 10)
            {
                Console.WriteLine("출력");
                i++;
            }

            int a, b, c, d;
            int num = 8;
            for (a = 0; a < num; a++)
            {
                for (d = 0; d < (num - a - 1); d++)
                {
                    Console.Write(" ");
                }
                for (b = 0; b <= a; b++)
                {
                    Console.Write("*");
                }
                for (c = 0; c < a; c++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            int[] ints = new int[5];
            int max = 0;
            int min = 0;
            for (int z = 0; z < 5; z++)
            {
                Console.WriteLine("값 입력");
                ints[z] = int.Parse(Console.ReadLine());
                if (ints[z] > max)
                {
                    max = ints[z];
                }
                if (ints[z] < min)
                {
                    min = ints[z];
                }
            }
            Console.WriteLine("가장 큰 수 : "+max);
            Console.WriteLine("가장 작은 수 : "+min);


        }
    }
}
