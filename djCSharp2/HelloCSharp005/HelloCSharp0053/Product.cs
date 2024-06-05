using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0053
{
    public class Product : IComparable<Product>
    {
        public int id { get; set; }
        public string name { get; set; }
        public int price { get; set; }

        //Object 클래스 : 모든 클래스의 조상
        //ToString, Equals, ToHashCode 모두 Object 클래스에서
        //파생된 메서드이고, 이 것들 모두 오버라이드가 가능한 메서드
        public override string ToString()
        {
            return $"id:{id},이름:{name},가격:{price}원";
            //return base.ToString();
        }
        public override bool Equals(object obj)
        {
            //비교 기준을 오직 id로만 잡은 경우
            return id == (obj as Product).id;
        }

        //List에서 Sort 호출하면
        //내부적으로 CompareTo를 호출해서 
        //정렬을 함
        public int CompareTo(Product other)
        {
            //List 안에 있는 price들을 서로 비교함
            return price.CompareTo(other.price);
        }
    }
}
