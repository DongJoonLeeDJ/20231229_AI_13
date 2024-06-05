using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp005
{
    internal class Program
    {
        //enum, enumeration
        //열거형
        //숫자에 이름을 붙임
        enum GaBaBo
        {
            GAWI=1, BAWI, BO
        }
        static void Main(string[] args)
        {
            //가위 바위 보
            //가위=1, 바위=2, 보=3이라고 가정해보자
            //RCP = Rock scissors paper 
            Random r = new Random();
            int answer = r.Next(3) + 1;//1~3;
            if(answer==1)
                Console.WriteLine("가위");
            else if(answer==2)
                Console.WriteLine("바위");
            else
                Console.WriteLine("보");

            switch (answer)
            {
                case (int)GaBaBo.GAWI:
                    Console.WriteLine("가위!!");
                    break;

                case (int)GaBaBo.BAWI:
                    Console.WriteLine("바위!!");
                    break;

                case (int)GaBaBo.BO:
                    Console.WriteLine("보!!");
                    break;
                default:
                    break;
            }


        }
    }
}
