using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyBookManager
{
    public class Book
    {
        public string isbn { get; set; }
        public string name { get; set; }
        public string userId { get; set; }
        public string userName { get; set; }
        public bool isBorrowed { get; set; }
        public DateTime borrowedAt { get; set; }
    }
}
