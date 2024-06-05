using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0054
{
    public partial class Form1 : Form
    {
        delegate void TestDelegate();
        private void HelloWorld()
        {
            MessageBox.Show("Test");
        }
        private void MboxTest(TestDelegate t, int count)
        {
            for (int i = 0; i < count; i++)
                t();
        }
        public Form1()
        {
            InitializeComponent();
            //button7.Click += Button7_Click;

            //button7.Click += delegate (object s, EventArgs e)
            //{
            //    MessageBox.Show("버튼 이벤트 추가");
            //};
            button7.Click += (s, e) =>
            {
                MessageBox.Show("람다로 이벤트 추가");
            };
        }

        //private void Button7_Click(object sender, EventArgs e)
        //{
        //    MessageBox.Show("버튼 이벤트 추가");
        //}

        private void button1_Click(object sender, EventArgs e)
        {
            MboxTest(HelloWorld, 3);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            TestDelegate a = HelloWorld;
            MboxTest(a, 2);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //무명 델리게이트
            MboxTest(delegate () { MessageBox.Show("하이"); }, 5);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            TestDelegate a = delegate () { MessageBox.Show("ㅎㅇ"); };
            MboxTest(a, 6);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            //람다
            //무명 델리게이트를 더 축약한 형태
            MboxTest(() => { MessageBox.Show("람다"); }, 10);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            TestDelegate t = () => { MessageBox.Show("람다2"); };
            MboxTest(t, 10);
        }


        private int myCompare(Product a, Product b)
        {
            return a.price.CompareTo(b.price);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            label1.Text = ""; //정렬 안 된 거
            label2.Text = ""; //정렬 된 거
            List<Product> products = new List<Product>();
            products.Add(new Product() { name = "감자", price = 500 });
            products.Add(new Product() { name = "고구마", price = 100 });
            products.Add(new Product() { name = "김치", price = 250 });

            foreach (var item in products)
                label1.Text += item.ToString()+Environment.NewLine;

            products.Sort(myCompare);

            //products.Sort(delegate (Product a, Product b) { return a.price.CompareTo(b.price); });
            
            //products.Sort((a, b) => { return a.price.CompareTo(b.price); });

            foreach (var item in products)
                label2.Text += item.ToString() + Environment.NewLine;

        }
    }
}
