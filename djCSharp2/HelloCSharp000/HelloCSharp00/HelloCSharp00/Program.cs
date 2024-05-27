using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp00
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //System.out.println = 출력
            Console.WriteLine("출력 후 한 줄 띄기");
            Console.Write("출력 후 한 줄 띄지 않음"); //System.out.print랑 동일
            Console.WriteLine("cw 탭탭");
            Console.WriteLine(); //java에서는 sysout 적고 ctrl space를 했음
           

            //문자열 처리
            //java에서는 get을 썼었음
            Console.WriteLine("안녕하세요"[0]); //안 이라는 글자 출력

            //기본적으로 덧셈 연산은 자바랑 유사함
            //덧셈을 이용해서 문자열 더하기 되고, 숫자 연산도 됨

            string s = "Hello"; //java에서는 무조건 String으로 썼음
            bool b = true; //java에서는 Boolean을 썼음

            for(int i = 0; i<10; i++)
            {
                Console.WriteLine("안녕");
            }

            //foreach문이 java랑 다름
            //java는 foreach문 개념만 있음, for(int item : nums)
            //c#은 foreach라는 문법이 있음
            int[] nums = new int[] { 3, 7, 5, 9, 2 };
            foreach(int item in nums)
            {
                Console.WriteLine(  item );
            }

            //java에 있는 삼항연산자, if, if else, switch다 있음
            //for뿐 아니라 while, do while도 있음
            //Scanner s = new Scanner(System.in); = 입력
            Console.WriteLine("이름은 무엇인가요?");
            string name = Console.ReadLine();
            Console.WriteLine("나이는?");
            int age = int.Parse(Console.ReadLine());
            Console.WriteLine("나이는 " + age + "살입니다." );

            introduce("이동준", 35);
            introduce("이지환", 15);


            reverseSign(nums);

            foreach(int item in nums)
                Console.WriteLine(item);


        }

        //배열을 매개변수로 한 뒤, 함수에서 변경하면 메인에서도 변경됨
        //이는 C,Java에서도 해당되는 특징
        //배열은 포인터니까...(java, c#에선 배열을 클래스로 봄)
        //클래스 역시 일종의 포인터에서 유래된 자료형
        static void reverseSign(int[] nums)
        {
            for(int i = 0; i<nums.Length; i++)
                nums[i] *= -1;
        }

        static void introduce(string name, int age)
        {
            Console.WriteLine("이름 : " + name);
            Console.WriteLine("나이 : " + age);
            if(age<20)
            {
                Console.WriteLine("학교를 다니고 있을 가능성이 높아요");
            }
            else
            {
                Console.WriteLine("회사를 다니고 있을 가능성이 높아요.");
            }
        }
    }
}
