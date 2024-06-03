using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0033
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label1.Text = "프로그램 시작!";
            StartPosition = FormStartPosition.CenterScreen;
        }
        int s = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            s++;
            label1.Text = "프로그램 시작 " + s + "초 경과";
        }
    }
}
