using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp001
{
    public class Animal
    {
        public string name { get; set; }
        public int age { get; set; }
        public void sleep() { Console.WriteLine(name+"동물은 잡니다."); }
        public void eat() { Console.WriteLine(age+"살 답게 먹습니다."); }
        //public Animal() { } //비어 있는 생성자가 자동으로 들어가 있음
        //생성자를 오버로딩하면 비어있는 생성자는 지워짐. 즉, new Animal() 이게 안 됨

        //이런 생성자를 추가하면 기존의 빈 생성자는 삭제됨
        //빈 생성자도 쓰고 싶다면 public Animal() { } 이렇게 추가를 해야 함

        //이런식으로 적는 걸 생성자 오버로딩이라고 함
        //오버로딩 : 생성자나 메서드에서 쓸 수 있는 말
        //이름은 같으나 매개변수가 다를 때(개수든 타입이든) 적용됨
        //public Animal() { }
        //public Animal(string name)
        //{
        //    this.name = name;
        //}

        //static이 붙은 걸 클래스 변수, 클래스 메서드라고 함(자바랑 같은 개념)
        //static이 붙은 거 안 쪽에서는 static이 붙지 않는 것을 쓸 수 없다
        //static이 붙지 않는 것 : 인스턴스 변수, 인스턴스 메서드
        //인스턴스 변수, 인스턴스 메서드는 인스턴스가 생성이 된 시점부터 쓸 수 있음
        //인스턴스 = new키워드 + 생성자();
        public static int count = 0;
        public static string zooName = "경북산업동물원";
        public static void oneDay()
        {
            Console.WriteLine(zooName+"의 하루가 시작됩니다.");
            //sleep();
            //eat();
        }
        public Animal()
        {
            count++; //생성자가 호출이 될 때 마다 동물이 하나씩 추가됨
            //단 주의할 점은 Bear와 같이 Animal을 상속한 생성자가 호출될 경우
        }



    }
}
