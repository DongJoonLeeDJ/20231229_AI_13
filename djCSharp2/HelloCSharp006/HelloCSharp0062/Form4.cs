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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }
        ISubject sub;
        IObserver ob1;
        IObserver ob2;
        public Form4(ISubject sub, IObserver ob1, IObserver ob2)
        {
            InitializeComponent();
            this.sub = sub;
            this.ob1 = ob1;
            this.ob2 = ob2;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            sub.unregister(ob1);
        }

        private void button2_Click(object sender, EventArgs e)
        {

            sub.unregister(ob2);
        }

        private void button3_Click(object sender, EventArgs e)
        {

            sub.register(ob1);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            sub.register(ob2);
        }
    }
}
