using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp001
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 2단원까지 함
            if (false)
            {

            Console.WriteLine("안녕 \"이동준\" 선생님");
            Console.WriteLine(10+3); //ctrl + d 누르면 코드 복사&붙여넣기 됨
            Console.WriteLine(10-3);
            Console.WriteLine(10*3);
            Console.WriteLine(10%3);
            Console.WriteLine(10/3);
            Console.WriteLine(10/3.0);

            Console.WriteLine($"{10+3},{10-3},{10*3},{10%3},{10/3},{10/3.0}");

            Console.WriteLine("10+3");//10+3이 출력됨
            Console.WriteLine(10+3);//13이 출력됨

            Console.WriteLine("Hello " + "World");
            //printf("%s %s", "Hello ", "World\n");

            //10+3+"5", 10+"3"+5, 10+'3'+5 출력해보기
            Console.WriteLine(10+3+"5"); //135
            Console.WriteLine(10+"3"+5); //1035
            Console.WriteLine(10+'3'+5); //66 '3' = ASCII 51


            Console.WriteLine("안녕하세요"[0]); //안
            Console.WriteLine('가'+'A');//44097
            //'A' =65
            //'가' = AC00 = 44032
            //44032+65 = 44097
            //C#, java부터는 작은 따옴표 안에 어떤 글자든 한 글자가 다 들어갈 수 있다
            //즉 '가' 이런 글자도 한 글자로써 인정받음
            //왜냐면 C#, java에서는 char가 2byte를 저장함(C는 1Byte 저장함)

            Console.WriteLine( 1==1); //True가 출력됨
            //C에서는 이런 경우 1이 출력됐음
            Console.WriteLine(false);
            }
            #endregion
            if(false)
            {
            #region 2단원 문제풀이

            
            Console.WriteLine("몇 인치인가요?");
            //Console.ReadLine() : 문자열(=string) 입력받는 함수
            //int.Parse("123") : 문자열을 정수(=int타입)로 변경해주는 함수
            int myinch = int.Parse(Console.ReadLine());
            Console.WriteLine(2.54*myinch);
            Console.WriteLine($"{2.54*myinch}cm");
            Console.WriteLine(2.54*myinch+"cm");
            Console.WriteLine("몇 kg인가요?");
            int mykg = int.Parse(Console.ReadLine());
            Console.WriteLine(2.20462262*mykg);
            Console.WriteLine("반지름은 얼마인가요?");
            int myr = int.Parse(Console.ReadLine());
            const double PI = 3.14; //상수
            double area = myr * myr * PI;//넓이
            double round = 2 * PI * myr; //둘레
            Console.WriteLine("넓이:"+area+",둘레:"+round);
            //rewind 이런 거 필요 없음
            Console.WriteLine("당신의 이름은 무엇인가요?");
            string name = Console.ReadLine();//c에서는 char 배열이 있었지만
            //c#에서는 string이라는 타입이 생겼고, string은 char 배열과 유사하게 동작함
            Console.WriteLine("이름 : " + name);
            Console.WriteLine("성 : " + name[0]);
                #endregion
            }
            #region 3단원까지 했음(조건문)

            if (false)
            {

           
            Console.WriteLine("태어난 연도를 입력하세요.");
            int myBirthYear = int.Parse(Console.ReadLine()); //myBirthYear에 태어난 연도를 입력받음
            myBirthYear = myBirthYear % 12;
            if(myBirthYear==9)
                Console.WriteLine("뱀띠!");
            else if(myBirthYear==10)
                Console.WriteLine("말띠!");
            else if( myBirthYear==11)
                Console.WriteLine("양띠!");
            else if (myBirthYear == 0)
                Console.WriteLine("원숭이띠!");
            else if (myBirthYear == 1)
                Console.WriteLine("닭띠!");
            else if (myBirthYear == 2)
                Console.WriteLine("개띠!");
            else if (myBirthYear == 3)
                Console.WriteLine("돼지띠!");
            else if (myBirthYear == 4)
                Console.WriteLine("쥐띠!");
            else if (myBirthYear == 5)
                Console.WriteLine("소띠!");
            else if (myBirthYear == 6)
                Console.WriteLine("호랑이띠!");
            else if (myBirthYear == 7)
                Console.WriteLine("토끼띠!");
            else if (myBirthYear == 8)
                Console.WriteLine("용띠!");
            else
                Console.WriteLine(myBirthYear);

            int nowYear = DateTime.Now.Year % 12; //올해를 12로 나눈 나머지, 0~11사이의 값이 무조건 나옴
            switch (nowYear)
            {
                case 0:
                    Console.WriteLine("원숭이~"); 
                    break; //코드를 한 줄이라도 적었다면 반드시 break를 추가해야 함
                case 1:
                    Console.WriteLine("닭~"); 
                    break;
                case 2:
                    Console.WriteLine("개~"); 
                    break;
                case 3:
                    Console.WriteLine("돼지~"); 
                    break;
                case 4:
                    Console.WriteLine("쥐~"); 
                    break;
                case 5:
                    Console.WriteLine("소~"); 
                    break;
                case 6:
                    Console.WriteLine("호랑이~"); 
                    break;
                case 7:
                    Console.WriteLine("토끼~");
                    break;
                case 8:
                    Console.WriteLine("용~");
                    break;
                case 9:
                    Console.WriteLine("뱀~"); 
                    break;
                case 10:
                    Console.WriteLine("말~"); 
                    break;
                case 11:
                    Console.WriteLine("양~"); 
                    break;
                default:
                    Console.WriteLine(nowYear+"은/는 잘못된 값!");
                    break;
            }

            Console.WriteLine("몇월에 태어나셨나요?");
            int myMonth = int.Parse(Console.ReadLine());
            switch (myMonth)
            {
                case 12:
                case 1:
                case 2:
                    Console.WriteLine("겨울~~~");
                    break;
                case 3:
                case 4:
                case 5:
                    Console.WriteLine("봄~~~");
                    break;
                case 6:
                case 7:
                case 8:
                    Console.WriteLine("여름~~~");
                    break;
                case 9:
                case 10:
                case 11:
                    Console.WriteLine("가을~~~");
                    break;
                default:
                    Console.WriteLine("어느 별에서 왔니? " + myMonth);
                    break;
            }

            //현재 월이 무슨 계절인 지 보자
            int nowMonth = DateTime.Now.Month;
            if(nowMonth==12 || nowMonth == 1 || nowMonth ==2)
                Console.WriteLine("겨울!!!");
            else if(nowMonth>=3 && nowMonth<=5)
                Console.WriteLine("봄!!!");
            else if (nowMonth >= 6 && nowMonth <= 8)
                Console.WriteLine("여름!!!");
            else if (nowMonth >= 9 && nowMonth <= 11)
                Console.WriteLine("가을!!!");
            else
                Console.WriteLine(nowMonth+"은/는 뭔가 이상하다!");
            }

            #endregion

            #region 4단원


            //C의 배열과 다른 점 두 가지
            //1. 배열의 []의 위치가 C, C#이 서로 다르다.
            //2. c#의 배열이 동적 할당이 좀 더 쉽다.
            //참고. C에서는 calloc이라는 걸 써야 배열의 값들이 전부 0으로 초기화 됨
            //malloc을 쓰면 동적으로 할당은 되지만 안의 값들이 쓰레기 값들임
            //c#에서는 new를 써서 크기 잡아주는 데 int 배열일 경우 안에 있는 값이 전부 0이다.
            Console.WriteLine("배열의 크기를 정하시오");
            int size = int.Parse(Console.ReadLine());
            int[] arr = new int[size]; //C와 다르게 쉽게 동적 할당을 할 수 있음(동적인 크기의 배열 만들기 가능)
            for(int i = 0; i<size; i++)
                Console.WriteLine(arr[i]);
            int[] myarray = new int[100]; //그냥 정수를 이용해서 고정된 크기의 배열 크기 잡아도 됨 

            int[] test = { 10, 7, 4, 3, 9 }; //간단한 정수 배열 선언
            //foreach : test 즉 컬렉션(배열과 같은 자료형)의 길이 만큼 반복되는 반복문
            //item에 배열의 각 요소들이 하나씩 들어감
            //var가 의미하는 것은 var = variable = 변수
            //한 번 할당되면 그 때 타입이 정해짐
            //item의 타입은 int가 됨
            foreach (var item in test)
                Console.WriteLine(item);


            #endregion

        }
    }
}
