using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using = c의 #include

namespace HelloCSharp02
{
    //public, get set 이런 부분들은 추후 설명 예정
    public class Student
    {
        //학번 : 절대 겹치지 않는 속성
        //이름, 성별, 나이 : 겹칠 수도 있는 속성
        public int Hakbeon { get; set; } //학번, 중복되면 안 됨
        public string Name { get; set; } //이름
        public string Gender { get; set; } //성별
        public int Age { get; set; } //나이
    }
}

