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
    public partial class BookForm : Form, IRefresh
    {
        public BookForm()
        {
            InitializeComponent();
            refreshScreen();
            if(DataManager.books.Count > 0 ) //처음 켰을 때
            {
                textBox_isbn.Text = DataManager.books[0].isbn;
                textBox_name.Text = DataManager.books[0].name;
            }
        }

        private void dataGridView_books_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            Book book = dataGridView_books.CurrentRow.DataBoundItem as Book;
            textBox_isbn.Text = book.isbn;
            textBox_name.Text = book.name;
        }

        private void button_add_Click(object sender, EventArgs e)
        {
            bool existBook = false; 
            foreach(var book in DataManager.books)
            {
                //java에서는 문자열 비교시 무조건 Equals를 쓰는 게 권장
                //C#은 ==으로 비교해도 무방해도
                //다만 equals를 쓰는 게 제일 무난함
                if(book.isbn == textBox_isbn.Text)
                {
                    existBook = true;
                    break;
                }
            }
            if(existBook)
                MessageBox.Show("해당 책은 이미 있습니다.");
            else
            {
                Book book = new Book();
                book.isbn = textBox_isbn.Text;
                book.name = textBox_name.Text;
                DataManager.books.Add(book);
                refreshScreen();
                DataManager.Save();
            }

        }

        private void button_update_Click(object sender, EventArgs e)
        {
            Book book = null; //얕은 복사에 활용하기 위함
            //book을 바꾸면 books에 있는 내용 같이 바뀌게 할 예정
            for(int i = 0; i<DataManager.books.Count; i++)
            {
                if (DataManager.books[i].isbn.Equals(textBox_isbn.Text))
                {
                    book = DataManager.books[i]; //book 바꾸면
                    //books의 i번째 요소도 같이 내용이 바뀜
                    book.name = textBox_name.Text;
                    refreshScreen();
                    DataManager.Save();
                }
            }
            if(book == null)
                MessageBox.Show("해당 책은 없는 책이므로 수정할 수 없습니다.");
        }

        private void button_delete_Click(object sender, EventArgs e)
        {
            bool existBook = false;
            for(int i = 0; i<DataManager.books.Count; i++)
            {
                if (DataManager.books[i].isbn.Equals(textBox_isbn.Text))
                {
                    DataManager.books.RemoveAt(i);
                    existBook = true;
                }
            }
            if(existBook)//삭제 성공
            {
                refreshScreen();
                DataManager.Save();
            }
            else
                MessageBox.Show("해당 책 없으므로 삭제 불가능");
        }

        public void refreshScreen()
        {
            bookBindingSource.DataSource = null;
            if (DataManager.books.Count > 0)
                bookBindingSource.DataSource = DataManager.books;
        }
    }
}
