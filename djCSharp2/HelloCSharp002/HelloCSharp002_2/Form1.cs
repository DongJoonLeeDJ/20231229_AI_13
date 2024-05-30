using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp002_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            dataGridView1.Rows.Add("추형욱", "2009038033", "남성");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView2.Columns[0].HeaderText = "이름";
            dataGridView2.Columns[1].HeaderText = "학번";
            //디자이너 창에서 Name값을 확인해봐야 함
            dataGridView2.Columns["genderDataGridViewTextBoxColumn"].HeaderText = "성별";

            studentBindingSource.Add(new Student() { name = "이동준", gender = "남성", 
                hakbeon = "2013" });
            Student s = new Student() { name = "박지선", gender = "여성", hakbeon = "2022123123" };
            studentBindingSource.Add(s);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            List<Student> students = new List<Student>();
            students.Add(new Student() { gender = "남성", name = "한형빈", hakbeon = "08" });
            students.Add(new Student() { gender = "여성", name = "이유나", hakbeon = "20" });
            dataGridView3.DataSource = null;
            dataGridView3.DataSource = students;

        }
    }
}
