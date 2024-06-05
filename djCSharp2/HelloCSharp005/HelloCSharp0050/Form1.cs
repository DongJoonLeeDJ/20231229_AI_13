using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ProgressBar;

namespace HelloCSharp0050
{
    enum Thee
    {
        MONKEY,CHICKEN,DOG,PIG,MOUSE,COW,TIGER,RABBIT,DRAGON,SNAKE,HORSE,SHEEP
    }
    public partial class Form1 : Form
    {
        int theeYear = 0;
        Bitmap[] bitmaps = new Bitmap[] { Properties.Resources._0, Properties.Resources._1, Properties.Resources._2,
        Properties.Resources._3, Properties.Resources._4, Properties.Resources._5,
        Properties.Resources._6, Properties.Resources._7, Properties.Resources._8,
        Properties.Resources._9, Properties.Resources._10, Properties.Resources._11};
        public Form1()
        {
            InitializeComponent();
            Point p1 = new Point(button_1_0.Location.X, button_1_0.Location.Y);
            Point p2 = new Point(button_2_0.Location.X, button_2_0.Location.Y);
            Point p3 = new Point(button_3_0.Location.X, button_3_0.Location.Y);
            Point p4 = new Point(button_4_0.Location.X, button_4_0.Location.Y);
            drawNumButtons(p1, "button_1_");
            drawNumButtons(p2, "button_2_");
            drawNumButtons(p3, "button_3_");
            drawNumButtons(p4, "button_4_");
        }
        
        private void drawNumButtons(Point p, string btnName)
        {
            int count = 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Button btn = new Button();
                    btn.Click += Btn_Click;
                    btn.Name = btnName + count;
                    btn.Text = count.ToString();
                    Point temp_p = p; //값 복사
                    temp_p.X = (p.X - 50) + (j * 50);
                    temp_p.Y = p.Y + (50 * (i + 1));
                    btn.Size = new System.Drawing.Size(30, 30);
                    btn.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
                    btn.Location = temp_p;
                    count++;
                    Controls.Add(btn);
                }
            }
        }

        private void Btn_Click(object sender, EventArgs e)
        {
            int dv = (sender as Button).Name.Split('_')[1][0]-'0';
            int mult = 1;
            for(int i =0; i<(4-dv); i++)
            {
                mult *= 10;
            }

            //Label도 클래스다
            //참조 복사(=얕은 복사)가 가능함
            Label myLabel = null;

            switch(mult)
            {
                case 1000:
                    myLabel = label_birthYear_1;
                    break;
                case 100:
                    myLabel = label_birthYear_2;
                    break;
                case 10:
                    myLabel = label_birthYear_3;
                    break;
                case 1:
                    myLabel = label_birthYear_4;
                    break;
            }

            myLabel.Text = (sender as Button).Text;


        }

        private void button_thee_Click(object sender, EventArgs e)
        {
            try
            {
                int year1000 = int.Parse(label_birthYear_1.Text) * 1000;
                int year100 = int.Parse(label_birthYear_2.Text) * 100;
                int year10 = int.Parse(label_birthYear_3.Text) * 10;
                int year1 = int.Parse(label_birthYear_4.Text) * 1;

                int year = year1000 + year100 + year10 + year1;
                selectThee(year);

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                MessageBox.Show("천의 자리가 안 됩니다.");
            }
        }

        private void selectThee(int year)
        {
            //이 코드는 더 줄일 수 있으나 enum의 쓰임새를 보기 위하여
            //일부러 길이를 늘려봤다.

            //사실 이거 한 줄이면 된다.
            //pictureBox_thee.Image = bitmaps[year%12];
            Thee t = (Thee)(year % 12);
            MessageBox.Show("띠="+t); //열거형자체가 문자열로 쉽게 변환됨

            switch (year % 12)
            {
                case (int)Thee.MONKEY:
                    pictureBox_thee.Image = bitmaps[0];
                    break;
                case (int)Thee.CHICKEN:
                    pictureBox_thee.Image = bitmaps[1];
                    break;
                case (int)Thee.DOG:
                    pictureBox_thee.Image = bitmaps[2];
                    break;
                case (int)Thee.PIG:
                    pictureBox_thee.Image = bitmaps[3];
                    break;
                case (int)Thee.MOUSE:
                    pictureBox_thee.Image = bitmaps[4];
                    break;
                case (int)Thee.COW:
                    pictureBox_thee.Image = bitmaps[5];
                    break;
                case (int)Thee.TIGER:
                    pictureBox_thee.Image = bitmaps[6];
                    break;
                case (int)Thee.RABBIT:
                    pictureBox_thee.Image = bitmaps[7];
                    break;
                case (int)Thee.DRAGON:
                    pictureBox_thee.Image = bitmaps[8];
                    break;
                case (int)Thee.SNAKE:
                    pictureBox_thee.Image = bitmaps[9];
                    break;
                case (int)Thee.HORSE:
                    pictureBox_thee.Image = bitmaps[10];
                    break;
                case (int)Thee.SHEEP:
                    pictureBox_thee.Image = bitmaps[11];
                    break;
                default:
                    break;
            }
        }

        private void button_reset_Click(object sender, EventArgs e)
        {
            label_birthYear_1.Text = "";
            label_birthYear_2.Text = "";
            label_birthYear_3.Text = "";
            label_birthYear_4.Text = "";
            pictureBox_thee.Image = null;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(int.TryParse(textBox1.Text, out int year))
            {
                pictureBox_thee.Image = bitmaps[year % 12];
            }

        }
    }
}
