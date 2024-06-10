using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0062
{
    public interface ISubject
    {
        void register(IObserver o);//객체 등록 subscribe
        void unregister(IObserver o);//객체 해제 unsubscribe 혹은 dissubscribe
        void notify(string msg); //일괄적으로 모든 IObserver들에게 update 호출하게 하는 것
    }
}
