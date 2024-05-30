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
    public partial class Form3 : Form
    {
        Form1 myform;
        public Form3(Form1 f)
        {
            InitializeComponent();
            myform = f;
            StartPosition = FormStartPosition.CenterScreen;
        }
        //object 타입 변수의 역할 : 이벤트를 발생시키는 주체
        //EventArgs : FormClose등 특수한 이벤트일 때 속성값을 갖는 객체
        private void doRCP(object o, EventArgs e)
        {
            //var : js의 var과 약간 다름
            //처음 선언할 때 오른쪽에 있는 자료형에 따라서 타입이 고정됨
            //즉 이 경우에는 result 변수가 string타입으로 고정됨
            var result = (o as Button).Text;
            myform.getResult(result);
            Close();
        }
    }
}
