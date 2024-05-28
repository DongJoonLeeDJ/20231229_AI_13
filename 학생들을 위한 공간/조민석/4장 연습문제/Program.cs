using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array1 = new int[500];
            int[] array2 = new int[500];
            int a = 0, b = 0;
            int cnt = 1;

            array1[0] = 1;

            Console.WriteLine("몇 번째 : ");
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("1번째 수열 : " + array1[0]);
            for(int i = 0; i < n; i++)
            {
                while (array1[a] != 0)
                {
                    if (array1[a] == array1[a + 1])
                        cnt++;
                    else
                    {
                        array2[b] = array1[a];
                        array2[b + 1] = cnt;
                        b += 2;
                        cnt = 1;
                    }
                    a++;
                          
                }
                Array.Copy(array2, array1, array2.Length);
                a = 0;
                b = 0;
                Console.Write(i + 2 + "번째 수열: ");
                foreach (var item in array1)
                {
                    if (item == 0)
                        break;
                    Console.Write(item);
                }
                Console.WriteLine();
            }

        }
    }
}
