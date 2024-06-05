using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace HelloCSharp0055
{
    internal class Program
    {
        static void printA()
        {
            for (int i = 0; i < 100; i++)
                Console.Write("A");
        }
        static void Main(string[] args)
        {
            //참고 : 기본 쓰레드로 윈폼 UI 건드리면 오류남
            //CrossThread 이슈가 발생함
            //그래서 BeginInvoke를(혹은 Invoke를) 활용해야 함

            ThreadStart t = printA;
            Thread t1 = new Thread(t);
            //Thread t1 = new Thread(printA);
            Thread t2 = new Thread(
                delegate ()
                {
                    for (int i = 0; i < 100; i++)
                        Console.Write("B");
                });
            Thread t3 = new Thread(
                () =>
                {
                    for (int i = 0; i < 100; i++)
                        Console.Write("C");
                });
            //Thread는 비동기방식이므로 A 다 찍고 B를 찍는 방식이 아니고
            //A, B, C를 번갈아가면서 찍을 것
            t1.Start();
            t2.Start();
            t3.Start();

        }
    }
}
