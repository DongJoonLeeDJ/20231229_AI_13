using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp004
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<Dog> dogs = new List<Dog>();
            dogs.Add(new Dog());
            dogs.Add(new Maltiz());
            dogs.Add(new Pug());
            Dog a = new Maltiz();
            dogs.Add(a);
            //개는 개더라도 개 마다 짖는 방식이 다 다르다
            //이런 걸 표현할 때 오버라이드를 쓴다.
            foreach(var item in dogs)
            {
                item.Bark();
            }

            Animal[] animals = new Animal[10];
            animals[0] = new Bear() {age=5,name="마동석" };
            Animal a1 = new Cat() { age=3,name="야옹이",eyeColor="파랑"};
            animals[1] = a1;
            Bear b1 = new Bear();
            b1.name = "마석도";
            b1.age = 7;
            animals[2] = b1;
            Animal bb = new Bear();
            bb.name = "흑곰";
            bb.age = 2;
            Animal cc = new Cat();
            cc.name = "랑이";
            cc.age = 6;
            
            //1. //(cc as Cat).eyeColor = "노랑";
            //2.
            if(cc is Cat)
            {
                var temp = cc as Cat;
                temp.eyeColor = "노랑";
            }
            //if문 밖에선 temp가 없어짐
            //animals[5] = temp;
            //3.
            var tempCat = cc as Cat == null ? null : cc as Cat;
            tempCat.eyeColor = "노랑";
            animals[3] = bb;
            animals[4] = cc;
            animals[5] = tempCat;
            foreach(var item in animals)
            {
                if(item!=null)
                {
                    item.sleep();
                    item.eat();
                    item.fight();
                    item.run();
                }
            } //에러가 나는 이유는 7번째부터 10번째까지는 null값 즉 아무것도 없어서 그렇다.
            foreach (var item in animals)
            {
                try
                {
                    item.sleep();
                    item.eat();
                    item.fight();
                    item.run();
                }
                catch(Exception ex)
                {

                }
            } //에러가 나는 이유는 7번째부터 10번째까지는 null값 즉 아무것도 없어서 그렇다.

            //이런식으로 복사를 하게 되면
            //참조 복사가 되므로
            //animals[6]을 바꿨는 데 a도 같이 바뀌는 일이 벌어질 수 있다!
            animals[6] = a;
            animals[7] = dogs[0];
            animals[8] = dogs[1];
            animals[9] = dogs[2];
            animals[6].name = "컹컹이";
            animals[6].age = 1;
            animals[7].name = "뭉치";
            animals[7].age = 2;
            animals[8].name = "멍뭉";
            animals[8].age = 3;
            animals[9].name = "뭉멍";
            animals[9].age = 4;
            Console.WriteLine(a.name); //얕은 복사(=참조 복사)에 의해서 값이 같이 바뀜
            Console.WriteLine(dogs[3].name);
            foreach(var item in animals)
            {
                item.sleep();
                item.eat();
                item.fight();
                item.run();
                if (item is Dog)
                    (item as Dog).Bark();
            }
            //추상클래스는 단독으로 인스턴스 못 만듦
            //Animal z = new Animal();
            Animal z = new Dog(); //무조건 오른쪽 부분은 후손
            //즉 다형성이 적용됨


        }
    }
}
