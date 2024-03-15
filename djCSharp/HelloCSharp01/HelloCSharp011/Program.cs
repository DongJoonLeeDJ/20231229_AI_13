using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp011
{
    //public : 공공의 라는 뜻이고, C#에서는 웬만하면 public만 쓴다.
    //Java에서는 private이랑 public을 쓰는 데 C#에선 웬만하면 전부 public을 씀
    public class Student //C언어의 구조체처럼 Student 라는 타입을 만든 것임
    {
        public string name { get; set; } //{ get; set; }을 넣는 이유로 추후 설명할 것임
        public int age { get; set; }
        public string gender { get; set; }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            //C언어랑 또 다른 점
            //C에서는 그냥 Student s; 이렇게만 적어도 되지만
            //C#, Java에서는 꼭 new + 생성자 즉 인스턴스를 적어줘야 함
            //안 적으면 해당 변수가 NULL값이기 때문에 꼭 적어야 됨
            Student s = new Student();
            s.name = "이동준";
            s.age = 35;
            s.gender = "남성";

            Random r = new Random(); //C#에서 별도로 제공해준 클래스
            Console.WriteLine(  r.Next(1,4)   ); //1,2,3 중 하나의 값을 출력함 

            Animal a = new Animal();
            a.Name = "니니";
            a.masterName = "이동준";
            a.Age = 17;
            a.Species = "말티즈";

        }
    }
}
