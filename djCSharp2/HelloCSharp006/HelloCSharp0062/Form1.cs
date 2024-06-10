using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp0062
{
    public partial class Form1 : Form, ISubject
    {
        List<IObserver> list = new List<IObserver>();
        public Form1()
        {
            InitializeComponent();
            Form2 frm2 = new Form2(this);// public Form2(ISubject sub)
            frm2.TopLevel = false;
            frm2.FormBorderStyle = FormBorderStyle.None;
            panel1.Controls.Add(frm2);
            frm2.Show();
            
            Form3 frm3 = new Form3(this);// public Form2(ISubject sub)
            frm3.TopLevel = false;
            frm3.FormBorderStyle = FormBorderStyle.None;
            panel2.Controls.Add(frm3);
            frm3.Show();

            Form4 frm4 = new Form4(this, frm2, frm3);// public Form2(ISubject sub)
            frm4.TopLevel = false;
            frm4.FormBorderStyle = FormBorderStyle.None;
            panel3.Controls.Add(frm4);
            frm4.Show();


        }

        public void notify(string msg)
        {
            foreach(IObserver o in list)
                o.update(msg);
        }

        public void register(IObserver o)
        {
            list.Add(o);
        }

        public void unregister(IObserver o)
        {
            //얕은 복사에 의해서 o 집어넣으면 해당 부분 삭제됨
            list.Remove(o);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            notify((sender as TextBox).Text);
        }
    }
}
