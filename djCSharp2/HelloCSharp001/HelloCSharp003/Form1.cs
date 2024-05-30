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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void getResult(string result)
        {
            Random r = new Random();
            int com = r.Next(3);
            label2.Text = "나:" + result + "\n";
            switch (result)
            {
                case "가위":
                    switch (com)
                    {
                        case 0:
                            label2.Text += "컴퓨터:가위\n결과:비김";
                            break;
                        case 1:
                            label2.Text += "컴퓨터:바위\n결과:패배";
                            break;
                        case 2:
                            label2.Text += "컴퓨터:보\n결과:이김";
                            break;
                        default:
                            break;
                    }
                    break;
                case "바위":
                    switch (com)
                    {
                        case 0:
                            label2.Text += "컴퓨터:가위\n결과:이김";
                            break;
                        case 1:
                            label2.Text += "컴퓨터:바위\n결과:비김";
                            break;
                        case 2:
                            label2.Text += "컴퓨터:보\n결과:패배";
                            break;
                        default:
                            break;
                    }
                    break;
                case "보":
                    switch (com)
                    {
                        case 0:
                            label2.Text += "컴퓨터:가위\n결과:패배";
                            break;
                        case 1:
                            label2.Text += "컴퓨터:바위\n결과:승리";
                            break;
                        case 2:
                            label2.Text += "컴퓨터:보\n결과:비김";
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form2 f = new Form2();
            Random r = new Random();
            int computer = r.Next(3); //0,1,2 중 하나를 선택함
            Hide();//Form1 창 숨김
            f.ShowDialog();//모달
            Show();//Form1 창 다시 나타냄
            if (Form2.mychoice == computer)
                label1.Text = "둘이 같은 걸 냈다. 비김!";
            else
            {
                switch (Form2.mychoice)
                {
                    case 0: //가위
                        //Environment.NewLine = \n 
                        //Environment.NewLine : 환경에 맞춰서 개행문자 삽입
                        label1.Text = "나:가위\n";
                        if (computer == 1) //바위
                            label1.Text += "컴퓨터:바위" + Environment.NewLine + "결과:패배";
                        else //보
                            label1.Text += "컴퓨터:보" + Environment.NewLine + "결과:승리";
                        break;
                    case 1: //바위
                        label1.Text = "나:바위\n";
                        if (computer == 0) //가위
                            label1.Text += "컴퓨터:가위" + Environment.NewLine + "결과:승리";
                        else //보
                            label1.Text += "컴퓨터:보" + Environment.NewLine + "결과:패배";
                        break;
                    case 2: //보
                        label1.Text = "나:보\n";
                        if (computer == 0) //가위
                            label1.Text += "컴퓨터:가위" + Environment.NewLine + "결과:패배";
                        else //바위
                            label1.Text += "컴퓨터:바위" + Environment.NewLine + "결과:승리";
                        break;
                    default:
                        break;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide();
            new Form3(this).ShowDialog();
            Show();
        }
    }
}
