using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp011
{
    //C의 헤더파일처럼
    //C#, Java에서는 class를 별도의 파일로 따로 정의함
    public class Animal
    {
        public string Name { get; set; }
        public string masterName { get; set; }
        public string Species { get; set; } //종 이름
        public int Age { get; set; }
    }
}
