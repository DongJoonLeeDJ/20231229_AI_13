using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyBookManager
{
    public partial class UserForm : Form, IRefresh
    {
        delegate void BtnEvent(object sender, EventArgs e);
        public UserForm()
        {
            InitializeComponent();
            refreshScreen();
            if (DataManager.users.Count > 0) //처음 켰을 때
            {
                textBox_id.Text = DataManager.users[0].id;
                textBox_name.Text = DataManager.users[0].name;
            }
            dataGridView_users.CellClick += DataGridView_users_CellClick;
            //button_add.Click += addButton;
            BtnEvent addbtn = addButton;
            button_add.Click += new EventHandler(addbtn);
            button_update.Click += delegate (object s, EventArgs e)
            {
                try
                {
                    //Single : 괄호 안에 있는 메서드가 참인 결과 하나를 반환
                    //만약 괄호안에 메서드가 참인 요소가 없으면 exception(=예외, 오류) 발생시킴
                    //이 때 얻게 된 u를 변경하게 되면 users의 해당 부분이 같이 변경됨
                    //즉 얕은 복사(혹은 참조 복사)개념이 적용됨
                    User u = DataManager.users.Single(user => user.id.Equals(textBox_id.Text));
                    u.name = textBox_name.Text;
                    try //Book에 userId, userName때문임...
                    {
                        List<Book> bs = (from book in DataManager.books 
                                         where book.userId.Equals(textBox_id.Text)
                                         select book).ToList();
                        for (int i = 0; i < bs.Count; i++)
                            bs[i].userName = textBox_name.Text;
                        //b.userName = textBox_name.Text;
                    }
                    catch(Exception ex)
                    {

                    }
                    refreshScreen();
                    DataManager.Save();
                }
                catch(Exception ex)
                {
                    MessageBox.Show("해당 회원은 존재하지 않습니다.");
                }
            };



            button_delete.Click += (s, e) =>
            {
                try
                {
                    User u = DataManager.users.Single(user => user.id.Equals(textBox_id.Text));
                    DataManager.users.Remove(u); //users의 해당 부분 하나가 지워 짐
                    refreshScreen();
                    DataManager.Save();
                }
                catch (Exception ex)
                {

                }

            };
        }

        private void addButton(object sender, EventArgs e)
        {
            //Exists : 메서드를 매개변수로 하는 메서드
            //반환값은 bool, 매개변수는 List의 각 요소들
            if (DataManager.users.Exists(x=>x.id.Equals(textBox_id.Text)))
                MessageBox.Show("해당 ID는 이미 존재합니다.");
            else
            {
                User u = new User();
                u.id = textBox_id.Text;
                u.name = textBox_name.Text;
                DataManager.users.Add(u);
                refreshScreen();
                DataManager.Save();
            }
        }


        private void DataGridView_users_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            User u = (sender as DataGridView).CurrentRow.DataBoundItem as User;
            textBox_id.Text = u.id;
            textBox_name.Text = u.name;
        }

        public void refreshScreen()
        {
            dataGridView_users.DataSource = null;
            if(DataManager.users.Count > 0)
            {
                dataGridView_users.DataSource = DataManager.users;
                dataGridView_users.Columns[0].HeaderText = "ID";
                dataGridView_users.Columns[1].HeaderText = "Name";
            }
        }
    }
}
