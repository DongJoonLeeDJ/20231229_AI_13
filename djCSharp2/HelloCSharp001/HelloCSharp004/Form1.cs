using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp004
{
    public partial class Form1 : Form
    {
        int cout = 1; //Form1 클래스의 속성이 된다.
        //즉 Student 클래스의 name이나 age와 같은 것이 되는 것
        int answer = 0;
        public Form1()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            clearButtons(); //기존에 있는 것들을 모두 삭제
            answer = new Random().Next(25) + 1;//1~25까지의 값이 정답
            Console.WriteLine("정답:"+answer);
            cout = 1;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Button button = new Button();
                    Point point = new Point();
                    point.X = 13 + 100 * j;
                    point.Y = 13 + 13 + (23 + 3) * i;
                    button.Location = point;
                    //이벤트(Event) : 어떤 행동을 했을 때 수행되는 메서드(ex. 클릭 등)
                    button.Click += Button_Click;  //만들어진 버튼에 클릭 이벤트 추가 함
                    button.Text = cout.ToString();

                    cout++;

                    Controls.Add(button);
                }
            }
        }

        private void clearButtons()
        {
            //뭔가를 삭제할 땐 역순으로 된 for문을 써야 함
            //0부터 시작하게 되면 index 오류가 나거나
            //삭제해야 할 것을 안 하고 지나가게 됨
            for(int i = Controls.Count-1; i>0; i--)
            {
                if (Controls[i] is Button) //i번째의 컴포넌트의 타입이 Button인지 체크
                {
                    if (!(Controls[i] as Button).Text.Equals("button1"))
                        Controls.RemoveAt(i); //글자가 button1 아닌 버튼들만 다 삭제함
                }
            }
        }

        private void Button_Click(object sender, EventArgs e)
        {
            if(answer == int.Parse( (sender as Button).Text))
            {
                MessageBox.Show("정답!");
                button1.PerformClick();
            }
            else
                MessageBox.Show((sender as Button).Text + "선택");
        }
    }
}
