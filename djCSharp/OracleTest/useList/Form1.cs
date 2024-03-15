using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace useList
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<int> nums = new List<int>();
            List<string> names = new List<string>();
            List<Student> students = new List<Student>();

            nums.Add(10);
            nums.Add(20);
            nums.Add(30);
            nums[1] = 1000; //java랑 다르게 get, set이 아니고 [] 활용함
            foreach(int item in nums)
                MessageBox.Show("Test : " + item);

            students.Add(new Student());
            students[0].name = "이동준";
            students[0].hakbeon = "001";
            students.Add(new Student());
            students[1].name = "김동준";
            students[1].hakbeon = "002";
            foreach(Student stu in students)
                MessageBox.Show("Test : " + stu.name+","+stu.hakbeon);


        }

        private void button2_Click(object sender, EventArgs e)
        {
            studentBindingSource.Add(new Student() { hakbeon = "123", name = "asdf" });
        }

        private void button3_Click(object sender, EventArgs e)
        {
            List<Student> students = new List<Student>();
            students.Add(new Student());
            students[0].name = "이동준";
            students[0].hakbeon = "001";
            students.Add(new Student());
            students[1].name = "김동준";
            students[1].hakbeon = "002";
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = students;
        }
    }
}
