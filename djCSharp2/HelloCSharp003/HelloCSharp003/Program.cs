using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp003
{
    internal class Program
    {
        static void Change(int input)
        {
            input = 20;
        }
        static void Change(ref int input)
        {
            input = 20;
        }
        static void Change(MyClass a, MyStructure b)
        {
            a.value = 20;
            b.value = 20;
        }
        static void Main(string[] args)
        {
            //ref = C++에서 & 표시 = 참조
            //참조!=포인터랑 조금 다름
            //C++에서는 int& refa = a;
            //참조자 : 참조자 자체를 출력하면 그냥 값이 출력됨
            //다만, 메서드 등에서 매개변수로 쓰이게 되면
            //포인터처럼 위치정보도 같이 가지고 있음
            //그래서 함수(=메서드)에서 값이 변하면 같이 변함
            int a = 10;
            Change(a);//원본에 영향을 주지 않음   10
            Console.WriteLine(a); 
            Change(ref a); //원본에 영향을 준다   20
            Console.WriteLine(a);

            MyClass a1 = new MyClass();
            //구조체(Struct) : java에는 없고 C,C++에 있는 자료형
            //C에서의 구조체 : 함수가 없는 class와 유사, 다만 일반 변수처럼
            //값 복사 형식을 씀
            //C++에서의 구조체 : class랑 동일함
            //C#에서의 구조체 : C처럼 값 복사 형식을 쓰되, 구조체 안에 함수를 추가 가능함

            //값 복사 : 값만 복사해서 함수에 넘겨준다는 뜻
            //이게 가능한 이유 : 구조체 안에 속성이 예를 들어서 int가 3개라면 용량이 12byte(나이,번호,출생연도)
            MyStructure b1 = new MyStructure();
            a1.value = 10;
            b1.value = 10;
            Change(a1, b1);//class는 영향받고 구조체는 영향을 받지 않음  20 10

            //List,ArrayList,배열은 클래스와 똑같은 방식으로 메모리를 처리함
            //함수를 이용해서 뭔가를 복사하거나 변경할 때 이 부분을 주의해줘야 함!!!
            Console.WriteLine(a1.value);
            Console.WriteLine(b1.value);
        }
    }
}
