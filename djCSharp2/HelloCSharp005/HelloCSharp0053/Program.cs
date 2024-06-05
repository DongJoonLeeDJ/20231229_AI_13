using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0053
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Product p1 = new Product();
            p1.id = 1;
            p1.name = "감자";
            p1.price = 100;
            Console.WriteLine(p1); //ToString 메서드가 수행됨
            Console.WriteLine(p1.ToString()); 
            Product p2 = new Product() { id = 1, name = "고구마", price = 2000 };
            Console.WriteLine(p1==p2); //p1 변수랑 p2 변수가 컴퓨터 메모리 안에서
            //서로 다른 위치에 있으므로 false가 뜸
            Console.WriteLine(p1.Equals(p2));//Equals같은 경우 비교 기준을 id로 정해놔서
            //id가 같으면 서로 같은 걸로 간주해 줌

            List<int> numbers = new List<int>() { 5, 2, 1, 4 };
            numbers.Sort();
            foreach(var item in numbers)
                Console.WriteLine(item);

            List<Product> products = new List<Product>() { p1, p2 };
            products.Sort(); //처리되지 않은 예외: System.InvalidOperationException: 배열의 두 요소를 비교하지 못했습니다
            foreach (var item in products)
                Console.WriteLine(item);
        }
    }
}
