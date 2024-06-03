using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0032
{
    internal class Program
    {
        static long fibo(int i)
        {
            if (i <= 0)
                return 0;
            if (i <= 2)
                return 1;
            return fibo(i - 2) + fibo(i - 1);
        }
        static Dictionary<int, long> memo = new Dictionary<int, long>();
        static long get(int i)
        {
            if (i <= 0)
                return 0;
            if (i <= 2)
                return 1;
            if (memo.ContainsKey(i))
                return memo[i];
            else
            {
                long value = get(i - 2) + get(i - 1);
                memo[i] = value;
                return value;
            }



        }
        static void Main(string[] args)
        {
            //dictionary 활용한 것
            Console.WriteLine(get(40));
            //안 한 것
            Console.WriteLine(fibo(40));
        }
    }
}
