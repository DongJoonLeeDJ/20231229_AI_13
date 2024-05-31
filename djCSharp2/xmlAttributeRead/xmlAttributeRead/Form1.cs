using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace xmlAttributeRead
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string url = "https://api.odcloud.kr/api/15067178/v1/uddi:d4b9ff0c-8667-4ba5-9356-b73a0dffa4b7?page=1&perPage=10&returnType=XML&serviceKey=MgX2EIv5i2myv26gGKACE9U5XFuLIi%2BggnKqN8I0BaN4mpFOsHCmqIopmOqpyukSrphm6MrV0aY0Nf4YVB3ceA%3D%3D";
            XElement xe = XElement.Load(url);
            Console.WriteLine(xe);
            var a = xe.Descendants("item");
            List<Restaurant> restaurants = new List<Restaurant>();
            foreach(var ii in a)
            {
                //Console.WriteLine(ii);
                Dictionary<string,string> values = new Dictionary<string,string>(); 
                foreach(var item in ii.Descendants("col"))
                {
                    values.Add((string)item.Attribute("name"), item.Value);
                }
                Restaurant r = new Restaurant(values["번호"], values["메뉴"],
                    values["홈페이지"], values["지역"], values["주소"],
                    values["식당명"], values["연락처"]);
                restaurants.Add(r);


                //Console.WriteLine(values["홈페이지"]);
                //Console.WriteLine(values["메뉴"]);
                //Console.WriteLine(values["번호"]);
                //Console.WriteLine(values["식당명"]);
                //Console.WriteLine(values["연락처"]);
                //Console.WriteLine(values["주소"]);
                //Console.WriteLine(values["지역"]);
            }
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = restaurants;
        }
    }
}
