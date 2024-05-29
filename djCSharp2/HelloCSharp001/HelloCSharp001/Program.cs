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
            //static 이 붙은 메서드나 변수(=클래스 변수, 클래스 메서드)는
            //조상 클래스와 공유를 함 
            //즉 값이 똑같음
            Console.WriteLine(Animal.count);//0
            Console.WriteLine(Bear.count);//0
            Console.WriteLine(Animal.zooName);//경북산업동물원
            Console.WriteLine(Bear.zooName);//경북산업동물원
            Animal.oneDay();//경북산업동물원의 하루가 시작됩니다.
            Bear.oneDay();//경북산업동물원의 하루가 시작됩니다.



            Animal a = new Animal();
            Console.WriteLine(Animal.count);//1
            Console.WriteLine(Bear.count);//1

            Bear b = new Bear();
            Console.WriteLine(Animal.count);//2
            Console.WriteLine(Bear.count);//2
            //그냥 f5를 누르면 디버깅 모드
            //ctrl f5는 실행만 함
            b.name = "푸"; //name과 age는 Animal에 있는 속성
            b.age = 2;//Bear 클래스 안에 직접적으로 적진 않았지만
            b.kg = 10.5;//Bear는 Animal을 상속했으므로 name, age속성을 가짐
            b.eat();
            b.sleep();
            b.hunt();

            Animal mybear = new Bear();

            Console.WriteLine(Animal.count);//3
            Console.WriteLine(Bear.count);//3
            //다형성에 의해 가능
            //(mybear as Random)
            //다형성 : 왼쪽 클래스는 조상 클래스 혹은 인터페이스가 올 수 있음
            //오른쪽 부분은 해당 클래스의 자손 혹은 인터페이스를 구현한 클래스
            (mybear as Bear).kg = 7.5;
            (mybear as Bear).hunt(); //다형성을 사용해서 오른쪽 부분의
            //속성이나 메서드 사용하기 위해서는 형변환이 필요함
            //C#에서 형변환하는 방법은 java랑 동일하게 괄호를 쓰는 방법이 있고
            //as 키워드 쓰는 방법이 있음
            ((Bear)mybear).hunt(); //java 스타일

            //25, 26, 34번째 줄에 new를 호출했기 때문
            //new Bear()를 호출하면 자동적으로 new Animal()이 호출됨(=자바랑 같은 특징)
            //참고 : java에선 조상클래스의 생성자 호출을 명시하기 위하여 super를 씀
            //c#에서는 base를 씀
            Console.WriteLine(Animal.count); //3
            Console.WriteLine(Bear.count);//3

            //무한 반복되는 구간이 있는 코드라면 || 모양 누르면 일시정지함
            //경우에 따라선 실시간 통신하는 프로그램에선 이 기능으로 인해
            //실시간 통신이 멈추면서 더 꼬일 수 있으니까 신중하게 쓰기
            //while(true)
            {
                Console.WriteLine("-");
            }



        }
    }
}
