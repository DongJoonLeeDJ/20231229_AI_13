using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp000
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //mbox 적고 tab키 두 번 눌러보기
            MessageBox.Show("Test 이동준 Test");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text);
        }
    }
}
