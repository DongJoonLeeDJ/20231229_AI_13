using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyParkingManagerDB
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label1.Text = DateTime.Now.ToString();
            timer1.Interval = 1000;
            timer1.Enabled = true;
            timer1.Tick += Timer1_Tick;

            try
            {
                textBox1.Text = DataManager.cars[0].parkingSpot + "";
                textBox2.Text = DataManager.cars[0].carNumber + "";
                textBox3.Text = DataManager.cars[0].driverName + "";
                textBox4.Text = DataManager.cars[0].phoneNumber + "";
                textBox5.Text = textBox1.Text;
            }
            catch (Exception ex) 
            { 
            }
            if (DataManager.cars.Count > 0)
                dataGridView1.DataSource = DataManager.cars;


            dataGridView1.CellClick += (s, e) =>
            {
                ParkingCar p = (s as DataGridView).CurrentRow.DataBoundItem as ParkingCar;
                textBox1.Text = p.parkingSpot.ToString();
                textBox2.Text = p.carNumber;
                textBox3.Text = p.driverName;
                textBox4.Text = p.phoneNumber;
                textBox5.Text = textBox1.Text;
            };
            button1.Click += (s, e) =>
            {
                if(textBox1.Text.Trim().Equals(""))
                    MessageBox.Show("주차 공간 입력하셔야 주차를 하실 수 있습니다.");
                else if (textBox2.Text.Trim().Equals(""))
                    MessageBox.Show("차량 번호를 알아야 주차를 하실 수 있습니다.");
                else
                {
                    try
                    {
                        ParkingCar p = DataManager.cars.Single(c => c.parkingSpot.ToString().Equals(textBox1.Text));

                        if(p.carNumber.Trim().Equals("") == false)
                            MessageBox.Show("이 곳엔 이미 차가 있어서 주차할 수 없어요.");
                        else //해당 공간이 비어서 주차가 가능한 경우
                        {
                            p.carNumber = textBox2.Text;
                            p.driverName = textBox3.Text;
                            p.phoneNumber = textBox4.Text;
                            p.parkingTime = DateTime.Now;

                            dataGridView1.DataSource = null;
                            dataGridView1.DataSource = DataManager.cars;

                            DataManager.Save(textBox1.Text, textBox2.Text, textBox3.Text, textBox4.Text);
                            string contents = $"주차 공간 {textBox1.Text}에 " +
                            $"{textBox2.Text}차를 주차했습니다.";
                            writeLog(contents);
                            MessageBox.Show(contents);
                        }

                    }
                    catch(Exception ex)
                    {
                        MessageBox.Show("주차 공간 " + textBox1.Text+"는 없습니다.");
                        writeLog("주차 공간 " + textBox1.Text + "는 없습니다.");
                    }
                }
            };
            button2.Click += (s, e) =>
            {
                if(textBox1.Text.Equals(""))
                    MessageBox.Show("주차 공간 번호를 알아야 출차가 됩니다.");
                else
                {
                    try
                    {
                        ParkingCar p = DataManager.cars.Single
                        (c => c.parkingSpot.ToString().Equals(textBox1.Text));
                        if(p.carNumber.Equals(""))
                            MessageBox.Show("아직 차가 없으니 출차 안 됩니다.");
                        else
                        {
                            string oldCar = p.carNumber;//전에 주차한 차 정보
                            p.carNumber = "";
                            p.driverName = "";
                            p.phoneNumber = "";
                            p.parkingTime = new DateTime();

                            dataGridView1.DataSource = null;
                            dataGridView1.DataSource = DataManager.cars;

                            DataManager.Save(textBox1.Text, null, null, null, true);
                            string contents = $"주차 공간 {textBox1.Text}에 {oldCar} 차 출차";
                            writeLog(contents);
                            MessageBox.Show(contents);
                        }
                    }
                    catch(Exception ex)
                    {
                        MessageBox.Show($"출차 불가능 {textBox1.Text} 없음");
                        writeLog($"출차 불가능 {textBox1.Text} 없음");
                    }
                }
            };

        }

        private void writeLog(string v)
        {
            DataManager.printLog(v);
            //새로운 내용이 맨 밑으로 감
            //listBox1.Items.Add(log);

            //맨 위에 있는 내용이 최신 내용으로 감
            listBox1.Items.Insert(0, v);
        }

        private void Timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString();
        }
    }
}
