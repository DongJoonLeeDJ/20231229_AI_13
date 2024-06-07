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
    public partial class MainForm : Form, IRefresh
    {
        public MainForm()
        {
            InitializeComponent();
            refreshScreen();
        }

        bool checkIsBorrowed(Book b)
        {
            return b.isBorrowed;
        }

        public void refreshScreen()
        {
            label_totalBookCount.Text =
                "전체 도서 수 : " + DataManager.books.Count; //처음 이 시점에 정적 생성자가 호출됨
            label_totalUserCount.Text =
                "전체 회원 수 : " + DataManager.users.Count;
            //Where, Single : List에서 쓸 수 있는 메서드
            //메서드를 매개변수로 받는 메서드
            //List의 요소들 하나하나에 대해서 이 메서드를 돌림
            //이 메서드의 return 값이 true인 것들만 가져 옴
            label_borrowedBookCount.Text =
                "대출 중인 도서의 수 : " +
                DataManager.books.Where(checkIsBorrowed).Count();
            label_delayedBookCount.Text =
                "연체 중인 도서의 수 : " + DataManager.books.Where(delegate (Book b)
                {
                    return b.isBorrowed && b.borrowedAt.AddDays(7) < DateTime.Now;
                }).Count();

            bookBindingSource.DataSource = null;
            if (DataManager.books.Count > 0)
                bookBindingSource.DataSource = DataManager.books;

            userBindingSource.DataSource = null;
            if (DataManager.users.Count > 0)
                userBindingSource.DataSource = DataManager.users;

        }


        private void timer_now_Tick(object sender, EventArgs e)
        {
            toolStripLabel_now.Text
                = DateTime.Now.ToString();
        }

        private void ToolStripMenuItem_bookManager_Click(object sender, EventArgs e)
        {
            BookForm bform = new BookForm();
            bform.ShowDialog();//ShowDialog = 모달 = 코드가 멈춤
            refreshScreen();
        }

        private void ToolStripMenuItem_userManager_Click(object sender, EventArgs e)
        {
            new UserForm().ShowDialog();
            refreshScreen();
        }

        private void button_borrow_Click(object sender, EventArgs e)
        {
            if(textBox_isbn.Text.Trim().Equals(""))//공백제거했음에도 아무것도 없다?
                MessageBox.Show("ISBN을 입력해주세요.(대출 불가능)");
            else if(textBox_id.Text.Trim().Equals(""))
                MessageBox.Show("회원 ID를 입력해주세요(대출 불가능)");
            else
            {
                try
                {
                    Book book = DataManager.books.Single
                        (b=>b.isbn.Equals(textBox_isbn.Text));
                    if(book.isBorrowed)
                        MessageBox.Show("이미 대출된 책입니다.");
                    else
                    {
                        try
                        {
                            User user = DataManager.users.Single
                                (u => u.id.Equals(textBox_id.Text));
                            book.userId = user.id;
                            book.userName = user.name;
                            book.isBorrowed = true;
                            book.borrowedAt = DateTime.Now;
                            refreshScreen();
                            DataManager.Save();
                            MessageBox.Show($"{book.isbn} : {user.id}님에 의해 대출됨");
                        }
                        catch(Exception ex)
                        {
                            MessageBox.Show("해당 ID인 회원은 존재하지 않습니다.(대출 불가능)");

                        }

                    }
                }
                catch(Exception ex)
                {
                    MessageBox.Show("해당 ISBN은 존재하지 않습니다.(대출 불가능)");
                }
            }
        }

        private void button_return_Click(object sender, EventArgs e)
        {
            if (textBox_isbn.Text.Trim().Equals(""))//공백제거했음에도 아무것도 없다?
                MessageBox.Show("ISBN을 입력해주세요.(반납 불가능)");
            else
            {
                Book book = DataManager.books.Single
                        (b => b.isbn.Equals(textBox_isbn.Text));
                if(book.isBorrowed==false)
                {
                    MessageBox.Show("아직 빌리지 않았으므로 반납 불가능");
                }
                else
                {
                    book.userId = "";
                    book.userName = "";
                    book.isBorrowed = false;

                    DateTime oldDay = book.borrowedAt;
                    book.borrowedAt = new DateTime();//날짜 초기화

                    TimeSpan timeDiff = DateTime.Now - oldDay;
                    if(timeDiff.Days>7)
                        MessageBox.Show("연체 반납");
                    else
                        MessageBox.Show("정상 반납");

                    refreshScreen();
                    DataManager.Save();

                }
            }
        }

        //sender = 이벤트를 발생시키는 주체
        private void dataGridView_books_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            DataGridView thisGridView = sender as DataGridView;
            Book b = thisGridView.CurrentRow.DataBoundItem as Book;
            textBox_isbn.Text = b.isbn;
            textBox_name.Text = b.name;
        }

        private void dataGridView_users_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            User u = (sender as DataGridView).CurrentRow.DataBoundItem as User;
            textBox_id.Text = u.id;
        }
    }
}
