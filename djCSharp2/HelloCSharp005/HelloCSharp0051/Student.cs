using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0051
{
    public class Student<T> //이런 걸 제너릭이라고 함(java에도 있는 개념)
    {
        //학교에 따라서 학번을 숫자로 관리할 수도 있고
        //문자로 관리할 수도 있다...
        public T hakbeon { get; set; }
        public string name { get; set; }
    }
}
