using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp002
{
    public class MyForm : Form //using System.Windows.Forms;
    {
        //public MyForm() {} //<- 이거가 삭제됨
        //아래에 있는 매개변수가 있는 생성자에 의해서...
        public MyForm(string name)
        {
            Label l = new Label();
            l.Text = name;
            l.Location = new System.Drawing.Point(20, 20);
            Controls.Add(l); //이걸 해줘야 창에 나타남
        }
    }
}
