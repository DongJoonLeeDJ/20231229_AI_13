using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp02
{
    internal class Program
    {
        static void Main(string[] args)
        {

            if(false)
            {

            Random r = new Random(); //C#에서 만든 랜덤 관련 class
            //참고로 class를 '객체'라는 말로 표현함
            //new 생성자 = 인스턴스 = 객체라고 하기도 함
            //지금 경우에는 랜덤 객체 r을 만들었다
            //C#, Java 등을 객체 지향 언어라고 명칭함
            int bns = r.Next(45) + 1;//r.Next(45) : 0~44 => 1~45
            int[] lotto = new int[6];
            for(int i = 0; i < 6; i++) 
            {
                int num = r.Next(45) + 1; //로또 번호 생성
                //기존까지의 중복체크는 반복문과 조건문을 같이 사용했음
                //그러나 라이브러리를 이용하면 코드를 줄일 수 있음
                //if(Array.IndexOf(lotto, num) == -1) //IndexOf의 기능 : lotto안에 num의 위치, 즉 인덱스 찾음, 해당 값 없으면 -1을 반환함 
                while(Array.IndexOf(lotto, num) != -1)
                    num = r.Next(45) + 1;
                lotto[i] = num;
            }
            Array.Sort(lotto); //오름 차순 정렬됨
            //Array.Reverse(lotto); 내림 차순 정렬용 뒤집기
            while (Array.IndexOf(lotto, bns) != -1)
                bns = r.Next(45) + 1;
            Console.Write("로또 번호 : "); //아무데나 클릭 후 ctrt + c 하면 줄 자체가 복사됨
            foreach (var item in lotto)
                Console.Write(item + " ");
            Console.WriteLine("보너스 번호 : " + bns);

            }

            goto startArr; //c와 마찬가지로 비권장 문법

            Student s1 = new Student();
            Console.WriteLine("학번이 어떻게 되시나요?");
            s1.Hakbeon = int.Parse(Console.ReadLine());
            Console.WriteLine("이름이 뭔가요?");
            s1.Name = Console.ReadLine();
            Console.WriteLine("성별이 어떻게 되시나요?");
            s1.Gender = Console.ReadLine();
            Console.WriteLine("몇 살이신가요?");
            s1.Age = int.Parse(Console.ReadLine());

            Console.WriteLine($"{s1.Hakbeon} 번 학생 정보");
            Console.WriteLine($"이름:{s1.Name}");
            //변수랑 문자열 출력하는 방식이 +를 이용하거나 $이용하는 거 외에도 다른 방법 있음
            Console.WriteLine(string.Format("성별:{0}, 나이:{1}",s1.Gender,s1.Age));

        startArr:
            //학생 배열을 만들 것
            //학번이 겹치면 안 되고, 학번 순으로 정렬도 할 것
            //Sort, Reverse, IndexOf 는 쓸 수 없다
            //쓰는 것 자체는 되는 데 델리게이트나 람다 개념, 인터페이스 그런 개념들을 알고 있어야 됨
            Student[] students = new Student[5];
            for(int i = 0; i<students.Length;i++)
            {
                Console.WriteLine("학번 입력");
                //int.TryParse의 특징 2가지
                //1. 문자열이 공백과 같이 정수가 아닐 경우 num에 0을 대입함
                //2. TryParse라는 함수는 false를 반환함
                if(int.TryParse(Console.ReadLine(), out int num)==false)
                {
                    Console.WriteLine("잘못된 값을 학번으로 입력하셨습니다.");
                    i--;
                    continue;
                }
                for(int j = 0; j<i; j++)
                {
                    if (num == students[j].Hakbeon)
                    {
                        num = 0;
                        break;
                    }
                }
                if(num<=0)
                {
                    Console.WriteLine("중복되었거나 유효하지 않은 값 입니다. 양수로 입력바랍니다.");
                    i--;
                    continue;
                }
                Console.WriteLine("이름은?");
                string name = Console.ReadLine();
                Console.WriteLine("성별은?");
                string gender = Console.ReadLine();
                Console.WriteLine("나이는?");
                //if(int.TryParse(Console.ReadLine(), out int age)==false)
                if(!int.TryParse(Console.ReadLine(), out int age))
                {
                    Console.WriteLine("나이로는 적절하지 않은 값입니다.");
                    i--;
                    continue;
                }
                students[i] = new Student(); //그냥 Student[] students = new Student[3]; 이거만 적으면 안 됨
                //NULL 값이 3개 들어간 것 뿐임
                //new Student()의 역할 : 저번에 잠깐 언급한 적 있는  heap 영역에 메모리를 할당해주는 것
                //즉 new Student()가 없으면 메모리 자체가 없는 것
                //Student 정보를 저장할 메모리 자체가 없는 것
                students[i].Hakbeon = num;
                students[i].Name = name;
                students[i].Gender = gender;
                students[i].Age = age;
            }
            foreach(var item in students)
            {
                Console.WriteLine($"학번:{item.Hakbeon}");
                Console.WriteLine($"이름:{item.Name}");
                Console.WriteLine($"성별:{item.Gender}");
                Console.WriteLine($"나이:{item.Age}");
            }
            //학번 순으로 정렬은 여러분들이 직접 for와 if 이용해서 해보기
            for(int i = 0; i<students.Length; i++)
            {
                for(int j = 0; j<students.Length-1-i; j++)
                {
                    if (students[j].Hakbeon > students[j+1].Hakbeon)
                    {
                        Student temp = students[j];
                        students[j] = students[j + 1];
                        students[j+1] = temp;
                    }
                }
            }
            Console.WriteLine("--- 정렬 결과 ----");
            foreach (var item in students)
            {
                Console.WriteLine($"학번:{item.Hakbeon}");
                Console.WriteLine($"이름:{item.Name}");
                Console.WriteLine($"성별:{item.Gender}");
                Console.WriteLine($"나이:{item.Age}");
            }
        }
    }
}
