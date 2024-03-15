using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp03
{
    internal class Program
    {
        static void introduce(string name, int age, string gender)
        {
            if(age<=0)
            {
                Console.WriteLine("나이값이 유효하지 않습니다.");
                return; //함수 강제 종료
            }
            Console.WriteLine("이름:" + name);
            Console.WriteLine("나이:" + age);
            Console.WriteLine("성별:"+gender);
        }
        static void Main(string[] args)
        {
            introduce("한형빈", 30, "남성");
            introduce("박지선", 20, "여성");
            introduce("이동준", -20, "남성");
            Student s1 = new Student();
            Student s2 = new Student();

            s1.Id = 1;
            s1.Name = "추형욱";
            s1.Description = "";
            Student.countofnum++;

            s2.Id = 2;
            s2.Name = "이동준";
            s2.Description = "코딩 강사를 함";
            Student.countofnum++;

            s1.introduceStudent();
            s2.introduceStudent();
            Console.WriteLine("학생 수 : " + Student.countofnum);
            Student.doStudy("C", 140);
            Student.doStudy("C#", 70);
            Student.doStudy("Java", 35);
        }
    }
}
