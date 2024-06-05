using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0051
{
    internal class Program
    {

        //out 키워드가 들어간 매개변수는 "반드시" 함수(메서드)안에서
        //값을 할당해야 함!!!!!!!!! 즉 = 이 들어가야 함
        static bool PowerResult(int a, out int p, out int pp)
        {
            p = a * a;
            pp = a * a * a;
            if(a<=0)
                return false;
            return true;
        }

        static void Main(string[] args)
        {
            //같은 student라고 해도
            //hakbeon의 타입은 다를 수 있음
            Student<int>s1 = new Student<int>();
            Student<string> s2 = new Student<string>();
            s1.hakbeon = 1;
            s1.name = "추형욱";
            s2.hakbeon = "001";
            s2.name = "이동준";

            int power1 = 1;
            int power2=1;
            int input = 5;
            if (PowerResult(input,  out power1, out power2))
            {
                Console.WriteLine("제곱:"+power1+",세제곱:"+power2);
            }
            else
            {
                Console.WriteLine("매개변수가 음수다!!");
                Console.WriteLine("제곱:" + power1 + ",세제곱:" + power2);
            }


        }
    }
}
