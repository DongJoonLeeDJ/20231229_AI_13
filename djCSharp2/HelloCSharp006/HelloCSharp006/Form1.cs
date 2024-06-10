using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp006
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Locale> locales = KakaoAPI.Search(textBox1.Text);
            listBox1.Items.Clear();
            foreach (var item in locales)
                listBox1.Items.Add(item);
        }

        private void textBox1_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
                button1.PerformClick();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            //해당 글자 클릭시 SetCenter 호출하게 할 것!!!
            if ((sender as ListBox).SelectedIndex == -1)
                return;
            Locale m = (sender as ListBox).SelectedItem as Locale;
            object[] pos = new object[] { m.lat, m.lng };
            HtmlDocument hdoc = webBrowser1.Document;
            hdoc.InvokeScript("setCenter", pos); //setCenter 메서드 호출, 매개변수 pos
        }
    }
}
