using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace HelloCSharp002_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string url = "https://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=2714055500";
            //XElement : XML 형태의 데이터를 처리하는 객체(C#에서 만들어 준 객체)
            XElement xe = XElement.Load(url);
            Console.WriteLine(xe); //xml 결과가 콘솔창에 나오게 됨

            //Descendant : 자손
            //Descendants = 자손들
            var xmlQueryLinq = from item in xe.Descendants("data") select item;
            foreach(var item in xmlQueryLinq)
            {
                Console.WriteLine("day : " + item.Element("day").Value);
                Console.WriteLine("시간 : " + item.Element("hour").Value);
                Console.WriteLine("날씨 : " + item.Element("wfKor").Value);
                Console.WriteLine("-----");
            }
            //LINQ 안 쓰고 바로 불러온 것
            foreach(var item in xe.Descendants("data"))
            {
                Console.WriteLine("day : " + item.Element("day").Value);
                Console.WriteLine("시간 : " + item.Element("hour").Value);
                Console.WriteLine("날씨 : " + item.Element("wfKor").Value);
                Console.WriteLine("-----");
            }
            //익명 객체를 활용한 방법
            var xmlQueryLinqWeather1 = 
                from item in xe.Descendants("data") 
                select new 
                {
                    hour= item.Element("hour").Value,
                    day = item.Element("day").Value,
                    weatherKor = item.Element("wfKor").Value
                };
            foreach(var item in xmlQueryLinqWeather1)
            {
                Console.WriteLine(  "~~~~");
                Console.WriteLine(item.hour);
                Console.WriteLine(item.day);
                Console.WriteLine(item.weatherKor);
            }
            var xmlQueryLinqWeather2 =
                from item in xe.Descendants("data")
                select new Weather()
                {
                    hour = item.Element("hour").Value,
                    day = item.Element("day").Value,
                    weaKor = item.Element("wfKor").Value
                };
            foreach(var item in xmlQueryLinqWeather2)
            {
                Console.WriteLine("@@@@@");
                Console.WriteLine(item.hour);
                Console.WriteLine(item.day);
                Console.WriteLine(item.weaKor);
            }
            //한글이 깬진다면 encoding 방식을 utf8로 지정한 뒤 가져오기
            //태그의 이름은 다 똑같고 속성으로 구분하는 경우, 방법 찾아보면 됨
        }
    }
}
