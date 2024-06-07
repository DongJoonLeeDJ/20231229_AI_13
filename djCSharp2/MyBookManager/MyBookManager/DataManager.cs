using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace MyBookManager
{
    public class DataManager
    {
        //클래스 변수
        //인스턴스가 아니므로 이 리스트는 공유됨
        public static List<Book> books = new List<Book>();
        public static List<User> users = new List<User>();

        //XML 방식을 통해서 데이터를 관리할 것
        //XML 방식을 하다보면 태그 부분에 오타가 많이 남
        //태그의 이름을 상수로 미리 정의하고 
        //그 상수를 가져다 쓰기만 함
        //그렇게 되면 <isbn>aaa</ibsn> 이런식의 오류는 나지 않음
        //<isbn>aaa</isbn> 혹은 <ibsn>aaa</ibsn>....

        //상수나 enum은 모두 대문자로 하는 것이 일반적이다.
        //C#은 앞에 접근 제한자(public private 등) 없으면
        //기본 값은 private이 적용됨
        const string ISBN = "isbn";
        const string NAME = "name";
        const string USERID = "userId";
        const string USERNAME = "userName";
        const string ISBORROWED = "isBorrowed";
        const string BORROWEDAT = "borrowedAt";

        const string ID = "id";
        const string NAMEUSER = "name";

        const string BOOKFILENAME = "./Books.xml";
        const string USERFILENAME = "./Users.xml";

        static bool checkBorrow(string isBorrowed)
        {
            return isBorrowed.Equals("1") ? true : false;
        }
        static int checkBorrow(bool isBorrowed)
        {
            return isBorrowed ? 1 : 0;
        }

        //정적 생성자
        //딱 한번만 호출됨
        //해당 클래스를 불러올 때 한 번만 호출됨
        //쉽게 말하면 프로그램 시작되고 나서
        //DataManager라는 글자 보이면 호출되며
        //그 뒤로는 호출되지 않음
        static DataManager()
        {
            Load();
        }

        public static void Load()
        {
            //참고
            //@의 용도 : 보통 파일 경로 설정때(역슬래시)할 때 많이 씀
            //string test = @"\안녕";
            //test = "\\안녕";
            try
            {
                string booksOutput = File.ReadAllText(BOOKFILENAME);
                XElement bx = XElement.Parse(booksOutput);//xml파일의 글자들을 실제 xml 형식으로 읽어들임
                books.Clear(); //List를 전부 삭제를 한 뒤 파일에서 새로 불러 옴
                foreach(var book in bx.Descendants("book")) //LINQ대신foreach활용
                {
                    Book b = new Book();
                    b.isbn = book.Element(ISBN).Value;
                    b.name = book.Element(NAME).Value;
                    b.userId = book.Element(USERID).Value;
                    b.userName = book.Element(USERNAME).Value;
                    b.isBorrowed = checkBorrow(book.Element(ISBORROWED).Value);
                    b.borrowedAt = DateTime.Parse(book.Element(BORROWEDAT).Value);
                    books.Add(b);
                }

                string usersOutput = File.ReadAllText(USERFILENAME);
                XElement ux = XElement.Parse(usersOutput);

                //LINQ는 users부분부터 .ToList<User>();까지가 단 1줄로 간주됨
                users = (from user in ux.Descendants("user")
                         select new User()
                         {
                             id = user.Element(ID).Value,
                             name = user.Element(NAMEUSER).Value
                         }).ToList<User>();
            }
            catch(IndexOutOfRangeException ex)
            {

            }
            catch(Exception ex) //catch를 여러 개 붙이기 가능한 데 최종적인 오류는
            {                   //Exception에서 처리함
                                //Exception이 모든 오류 객체의 조상(java에서도 마찬가지)
                Save();
                Load(); //데이터가 잘못저장됐거나 데이터는 있으나 잘못 읽어들이게 되면
            }           //이 코드는 무한대로 수행을 하게 되고(=재귀 함수)
        }               //StackOverFlow 에러가 날 수 있다.
        public static void Save() 
        {
            string booksOutput = "";
            booksOutput += "<books>\n";
            foreach(var book in books)
            {
                booksOutput += "\t<book>\n";
                booksOutput += $"\t\t<{ISBN}>{book.isbn}</{ISBN}>\n";
                booksOutput += $"\t\t<{NAME}>{book.name}</{NAME}>\n";
                booksOutput += $"\t\t<{USERID}>{book.userId}</{USERID}>\n";
                booksOutput += $"\t\t<{USERNAME}>{book.userName}</{USERNAME}>\n";
                booksOutput += $"\t\t<{ISBORROWED}>{checkBorrow(book.isBorrowed)}</{ISBORROWED}>\n";
                booksOutput += $"\t\t<{BORROWEDAT}>{book.borrowedAt}</{BORROWEDAT}>\n";
                booksOutput += "\t</book>\n";
            }
            booksOutput += "</books>\n";

            //기존 파일 내용을 덮어쓰고 xml 파일에 새로운 내용을 넣음
            File.WriteAllText(BOOKFILENAME, booksOutput);

            string usersOutput = "";
            usersOutput += "<users>\n";
            foreach(var user in users)
            {
                usersOutput += "\t<user>\n";
                usersOutput += $"\t\t<{ID}>{user.id}</{ID}>\n";
                usersOutput += $"\t\t<{NAMEUSER}>{user.name}</{NAMEUSER}>\n";
                usersOutput += "\t</user>\n";
            }
            usersOutput += "</users>\n";
            File.WriteAllText(USERFILENAME, usersOutput);

        }


    }
}
