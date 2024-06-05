using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp0054
{
    public class Product
    {
        public int price { get; set; }
        public string name { get; set; }
        public override string ToString()
        {
            return "제품명:" + name + ",가격:" + price;
        }
    }
}
