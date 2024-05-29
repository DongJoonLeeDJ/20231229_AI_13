using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp002
{
    //Form1은 Form이라는 클래스를 상속받은 클래스
    //Form1은 2개 이상의 파일로 만들어진 1개의 클래스
    //Form1클래스 : Form1.cs, Form1.Designer.cs로 만들어진 클래스
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //Show는 모달리스(Modeless)
            //모달리스 : 새로운 화면이 열려도 기존에 있던 화면 조작 가능
            new MyForm("선생님").Show();
            MessageBox.Show("Test3");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //MessageBox.Show, ShowDialog는 모달(Modal)
            //모달 : 새로운 화면이 열리면 기존 화면 조작 불가능하고
            //코드가 해당 시점에 멈추게 됨
            MessageBox.Show("Test1");
            //new MyForm("선생님???").ShowDialog();
            MyForm m = new MyForm("선생님???");
            m.ShowDialog();
            MessageBox.Show("Test2");
        }
    }
}
