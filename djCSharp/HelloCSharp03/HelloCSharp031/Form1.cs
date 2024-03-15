using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp031
{
    public partial class Form1 : Form
    {
        public Form1()//생성자, Form1이 생길 때 실행되는 코드
        {
            InitializeComponent();
            button1.Text = "버튼";//디자인창에서가 아니고
            //프로그램 시작할 때 텍스트 바꾸는 방법
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text += "!";
        }

        private void button_lotto_Click(object sender, EventArgs e)
        {
            label_lotto.Text = ""; //label 위에 적힌 글자 지움
            Random r = new Random();
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
            label_lotto.Text += r.Next(45) + 1 + " ";
        }

        //1초에 한 번씩 뭘 할 건지 정함
        int limitTime = 0; //메서드 위에 임시 변수등을 활용하게 되면
        //게임의 제한 시간도 구현할 수 있다!!!
        private void timer1_Tick(object sender, EventArgs e)
        {
            limitTime++;    
            if(limitTime==3)
            {
                label1.Text = "미스터 추";
            }
            //현재 시간 표시할 것임
            label2.Text =
                DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
        }
    }
}
