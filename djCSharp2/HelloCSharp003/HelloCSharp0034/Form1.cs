using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0034
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label1.Text = "";
        }
        int nowTime = 0;
        int answer = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString("현재 시간은 yyyy년 MM월 dd일 HH시 mm분 ss초입니다.");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            answer = new Random().Next(10) + 1;
            Console.WriteLine("정답:"+answer);
            timer2.Enabled = true;
            nowTime = 0;
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            nowTime++;
            Console.WriteLine("현재 경과 시간 : "+nowTime);
            if (nowTime==10)
            {
                timer2.Enabled = false;
                nowTime = 0;
                MessageBox.Show("게임 오버");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer2.Enabled = false;
            int mychoice = int.Parse(textBox1.Text);
            if(mychoice== answer)
            {
                MessageBox.Show("정답! 다시 게임을 시작합니다.");
                button1.PerformClick();
            }
            else
            {
                MessageBox.Show("오답!!");
                timer2.Enabled = true;
            }
        }



        private void clearButtons()
        {
            //뭔가를 삭제할 땐 역순으로 된 for문을 써야 함
            //0부터 시작하게 되면 index 오류가 나거나
            //삭제해야 할 것을 안 하고 지나가게 됨
            for (int i = Controls.Count - 1; i > 0; i--)
            {
                if (Controls[i] is Button) //i번째의 컴포넌트의 타입이 Button인지 체크
                {
                    if ((Controls[i] as Button).Name.Contains("myButton"))
                        Controls.RemoveAt(i); //글자가 button1 아닌 버튼들만 다 삭제함
                }
            }
        }

        int count = 1;
        int tNow = 0;
        int limitTime = 0;
        int tAnswer = 0;
        private void button3_Click(object sender, EventArgs e)
        {
            //limitTime = int.Parse(textBox2.Text);
            tNow = 0;
            if (!int.TryParse(textBox2.Text, out limitTime) || limitTime <= 0)
            {
                timer3.Enabled = false;
                MessageBox.Show("제한 시간을 제대로 입력해주세요");
                return;
            }
            Random r = new Random();
            tAnswer = r.Next(25) + 1;
            Console.WriteLine("정답:"+tAnswer) ;
            clearButtons();
            count = 1;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Button button = new Button();
                    Point point = new Point();
                    point.X = 13 + 100 * j;
                    point.Y = 200 + 25 * i;
                    button.Name = "myButton" + count;
                    button.Location = point;
                    button.Click += Button_Click;
                    button.Text = count.ToString();

                    count++;

                    Controls.Add(button);
                }
            }
            timer3.Enabled = true;
        }

        private void Button_Click(object sender, EventArgs e)
        {
            timer3.Enabled = false;

            if ((sender as Button).Text.Equals(tAnswer.ToString()))
            {
                MessageBox.Show("승리! 다시 게임을 시작합니다.");
                button3.PerformClick();
            }
            else
            {
                MessageBox.Show("이건 보물이 아닙니다.");
                timer3.Enabled = true;
            }
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            tNow++;
            Console.WriteLine("현재 경과 시간(보물찾기) : " + tNow);
            if (tNow == limitTime)
            {
                (sender as Timer).Enabled = false;
                tNow = 0;
                MessageBox.Show("게임 오버");
            }

        }

        private void button4_Click(object sender, EventArgs e)
        {
            timer2.Enabled = false;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            timer3.Enabled = false;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            timer2.Enabled = false;
            timer3.Enabled = false;
        }

    }
}
