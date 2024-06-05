using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0052
{
    public interface IFlyFantasy : IFly, IFantasy
    {
        void talk(string message);
    }
}
