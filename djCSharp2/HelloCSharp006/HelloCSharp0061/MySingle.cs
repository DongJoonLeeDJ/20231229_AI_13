using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0061
{
    //C# 스타일
    //더 간추린 형식(Lazy)가 있기는 하니까 궁금하면 찾아보세요.
    //뭔가를 상속하거나 상속받을 때 그러면서도 인스턴스는 단 하나만 쓰고 싶을 때
    //예를 들자면 우리 도서 관리 프로젝트도 사실 싱글톤으로 충분히 할 수 있음
    public class MySingle : MySuper
    {
        private static MySingle instance = null;
        private MySingle() { }
        public static MySingle Instance
        {
            get
            {
                if (instance == null)
                    instance = new MySingle();
                return instance;
            }
        }
        public override void print(string msg)
        {
            Console.WriteLine("메시지:"+msg);
        }
    }
}
