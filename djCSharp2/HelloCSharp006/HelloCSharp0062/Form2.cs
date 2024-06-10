using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0062
{
    public partial class Form2 : Form, IObserver
    {
        public Form2()
        {
            InitializeComponent();
        }
        public Form2(ISubject sub)
        {
            InitializeComponent();
            sub.register(this);
        }

        public void update(string value)
        {
            label1.Text = "옵저버 1 : " + value;
        }
    }
}
