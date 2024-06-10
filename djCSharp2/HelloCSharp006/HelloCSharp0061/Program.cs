using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0061
{
    internal class Program
    {
        /// <summary>
        /// 싱글톤 사용 이유
        /// 1. 상속을 원활히 하기 위해서(클래스 변수나 클래스 메서드는 상속 및 오버라이딩이 안 되고 그냥 공유됨)
        /// 2. 메모리 면에서도 더 메모리를 아낄 수 있다.
        /// </summary>
        static MyBase m = MyBase.getInstance();
        static MySingle s = MySingle.Instance;
        static void Main(string[] args)
        {
            //MyBase a = new MyBase();
            MySuper ms = new MySuper();
            ms.name = "이동준";
            ms.print("ㅎㅇ");
            m.name = "추형욱";
            m.print("ㅎㅇㅎㅇ");
            s.name = "aaaa";
            s.print("hi~");
        }
    }
}
