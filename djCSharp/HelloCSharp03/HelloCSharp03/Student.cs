using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp03
{
    public class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }

        //학생별로 다른 내용이나 결과를 도출할 수 있다.
        //학생 자체랑 연관이 있는 기능이므로 Student 안에 집어 넣었음
        public void introduceStudent()
        {
            //Description.Equals("") = Description에 아무 것도 없는 경우
            //문자열은 c#, java 둘 다 ==말고 Equals로 일치여부를 비교해야 함
            //if (Description.Equals(""))
            //Description = "";
            if (Description==null || Description.Equals(""))
            {
                Console.WriteLine("ID:" + Id);
                Console.WriteLine("Name:" + Name);
            }
            else
            {
                Console.WriteLine("ID:" + Id);
                Console.WriteLine("Name:" + Name);
                Console.WriteLine("특이사항:" + Description);
            }
        }

        //static이 붙는 경우 Student 전체가 공통적으로 사용하는 변수나 메서드
        //별도로 인스턴스 선언 없이 바로 클래스이름.변수, 클래스이름.함수() 이렇게
        //호출이 가능함
        public static int countofnum = 0; //해당 학교의 학생수는 학생들 개개인마다 다르지 않다.
        public static void doStudy(string subject, int hour)
        {
            Console.WriteLine(subject + "과목 공부합니다.");
            Console.WriteLine(hour+"시간 동안 공부합니다.");
        }
        public static string motto = "공부해서 남주자"; //모든 학생들이 공통적으로 갖는 값
    }
}
