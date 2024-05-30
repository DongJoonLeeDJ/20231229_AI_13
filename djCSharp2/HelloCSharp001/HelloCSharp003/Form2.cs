using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp003
{
    public partial class Form2 : Form
    {
        public static int mychoice = 0;
        public Form2()
        {
            InitializeComponent();
            button1.Text = "가위";
            button2.Text = "바위";
            button3.Text = "보";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            mychoice = 0;
            Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            mychoice = 1;
            Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            mychoice = 2;
            Close();
        }
    }
}
