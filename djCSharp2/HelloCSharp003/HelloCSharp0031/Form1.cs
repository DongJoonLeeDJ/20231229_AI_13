using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0031
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //try 적고 tab tab
            try
            {
                //x와 y라는 변수가 값을 직접 저장하고 있음
                int x = int.Parse(textBox1.Text);
                int y = int.Parse(textBox2.Text);
                swap(x, y); //x와 y가 저장하는 값만 보내 줌(복사&붙여넣기)
                label1.Text = "x=" + x + ", y=" + y;
            }
            catch (Exception ex)
            {
                int x = 3;
                int y = 5; 
                swap(x, y);
                label1.Text = "x=" + x + ", y=" + y;

            }
        }

        private void button2_Click(object sender, EventArgs e)
        {//try 적고 tab tab
            try
            {
                //x와 y라는 변수가 값을 직접 저장하고 있음
                int x = int.Parse(textBox1.Text);
                int y = int.Parse(textBox2.Text);
                //ref = reference = 참조
                swap(ref x, ref y); //x와 y의 위치 정보도 같이 보내므로, 값도 같이 바뀜
                label1.Text = "x=" + x + ", y=" + y;
            }
            catch (Exception ex)
            {
                int x = 3;
                int y = 5;
                swap(ref x, ref y);
                label1.Text = "x=" + x + ", y=" + y;

            }
        }

        void swap(int a, int b) //a와 b의 값을 서로 바꿈
        {                       //이 함수는 원본에 영향을 주지 않음(복사 붙여넣기)
            int temp = a;       //깊은 복사
            a = b;
            b = temp;
        }
        void swap(ref int a, ref int b) //바로 가기를 바꾼 것처럼
        {                               //원본의 a와 b도 서로 값이 바뀜
            int temp = a;               //얕은 복사
            a = b;
            b = temp;
        }


    }
}
