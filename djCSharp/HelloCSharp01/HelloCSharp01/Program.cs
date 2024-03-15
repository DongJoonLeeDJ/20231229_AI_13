using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01
{
    internal class Program
    {
        static void Main(string[] args)
        { 
        
        if(false)
        {

            //피라미드를 만들기 위해서는 공백은 줄고
            //별은 늘어나야 함
            Console.WriteLine("피라미드 몇 층으로 만들건가요?");
            //int.Parse : 공백이나 수가 아닌 걸 입력하면 프로그램이 강제 종료됨
            //int size = int.Parse(Console.ReadLine());

            //내가 입력한 문자열을 정수로 바꿔서 size라는 정수에 대입해줌
            //만약 공백을 비롯한 엉뚱한 문자열을 입력하게 되면
            //TryParse라는 함수는 false를 반환(return)하고 size에는 0이 들어감
            int.TryParse(Console.ReadLine(), out int size); //out, ref 키워드는 추후 설명 예정

            //visual studio 2015때까지는 이런식으로 변수를 미리 선언해야 했다.
            //int size = 0;
            //int.TryParse(Console.ReadLine(), out size);
            //2017부터는 int.TryParse(Console.ReadLine(), out int size);
            //이런식으로 TryParse 안에서 변수 선언도 됨

            for (int i = 0; i<size; i++)
            {
                //공백 부분
                for (int j = size - i; j > 1; j--)
                    Console.Write(" ");

                //별 부분
                for (int j = 0; j < 2 * i + 1; j++)
                    Console.Write("*");

                Console.WriteLine();//그 다음 줄로 넘어가게 해 줌
            }

            //2번 문제
            int[] numbers = new int[5];
            for(int i = 0; i<numbers.Length; i++)
            {
                Console.WriteLine($"numbers[{i}]의 값 입력");
                int.TryParse(Console.ReadLine(), out numbers[i]);
            }
            int max = numbers[0];
            int min = max;
            //for문에서의 i는 단순한 숫자
            //item 즉 in이라는 키워드 앞에 붙는 변수는
            //해당 컬렉션(=배열 등) 안에 있는 요소(=값)들이다.
            //foreach(var item in numbers)
            foreach(int item in numbers)
            {
                if (item > max)
                    max = item;
                if(item < min)
                    min = item;
            }
            Console.WriteLine($"max:{max}, min:{min}");

            int sum = 0;
            for (int i = 1; i <= 100; i++)
                sum += i;
            Console.WriteLine("1부터 100까지의 합 : " + sum);
             
            for (char i = '가'; i <= '힣'; i++)//유니코드상 가(AC00)로 시작하고 힣으로 끝남
                Console.Write(i);
            }

            string start = "1"; //c로 치자면 char start[1024] = "1";
            for(int i = 0; i<20;i++)
            {
                Console.WriteLine($"{i+1}번째 : {start}");
                int count = 0; //읽은 숫자의 개수
                char num = start[0];//현재 내가 읽고 있는 문자
                string end = ""; //지금까지 누적된 문자열
                for(int j = 0; j<start.Length; j++)
                {
                    if (num == start[j])
                    {
                        count++;
                    }
                    else
                    {
                        end = end + num + count;
                        num = start[j]; //현재 읽고 있는 문자 변경
                        count = 1;//새로운 게 발견되었으므로 count는 0이 아니라 1로 초기화
                    }
                }
                end = end + num + count;
                start = end;
            }

        }
    }
}
