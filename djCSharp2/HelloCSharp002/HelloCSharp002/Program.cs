using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp002
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] nums = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            //짝수 출력 방법1
            //var 대신 int를 써도 되지만 nums의 타입을 확인하기 번거로울 때 var을 쓴다.
            foreach(var item in nums)
            {
                if(item%2==0)
                    Console.WriteLine(item);
            }
            //짝수 출력 방법2 - LINQ //Language-Integrated Query
            var evenNums = from item in nums where item % 2 == 0 select item;
            foreach(var item in evenNums)
                Console.WriteLine(item);

            List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            List<int> numbers2 = new List<int>();
            for (int i = 1; i <= 10; i++)
                numbers2.Add(i); //1~10까지 값이 들어감
            var myoutput = from item in numbers where item % 2 == 0 select item;
            List<int> my_even_output =
                (from item in numbers2 where item % 2 == 0 select item).ToList<int>();
            int[] nums2 = (from item in nums where item % 2 == 0 select item).ToArray<int>();


        }
    }
}
