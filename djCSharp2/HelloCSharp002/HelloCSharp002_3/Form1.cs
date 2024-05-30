using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace HelloCSharp002_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string url = "https://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=2714055500";
            //XElement : XML 형태의 데이터를 처리하는 객체(C#에서 만들어 준 객체)
            XElement xe = XElement.Load(url);
            List<Weather> weathers = new List<Weather>();
            foreach(var item in xe.Descendants("data"))
            {
                /*
                Weather w = new Weather()
                {
                    day = item.Element("day").Value,
                    hour = item.Element("day").Value,
                    weatherState = item.Element("wfKor").Value
                };
                */
                Weather w = new Weather();
                w.day = item.Element("day").Value;
                w.hour = item.Element("hour").Value;
                w.weatherState = item.Element("wfKor").Value;
                weathers.Add(w);
            }
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = weathers;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //JSON = javaScript Object Notation = 자바스크립트 객체 표현법
            //별개의 라이브러리가 필요함 
            //NewtonSoft 라는 게 필요하고 이건 Nuget패키지 가지고 옴
            //Nuget패키지를 쓰기 위해선 .sln으로 실행해야 함(솔루션 단위로 실행해야 함)

            //1100회차부터 가장 최신회차까지 쭉 데이터그리드뷰에 뿌려볼 것임
            List<Lotto> lottos = new List<Lotto>();
            int count = 1100;
            string url = "https://www.dhlottery.co.kr/common.do?method=getLottoNumber&drwNo=";
            while(true)
            {
                WebClient wc = new WebClient();
                var json = wc.DownloadString(url+count);
                var jArray = JObject.Parse(json);
                if (jArray["returnValue"].ToString().Equals("fail"))
                    break;
                Lotto temp = new Lotto(
                    jArray["drwtNo1"].ToString(),
                    jArray["drwtNo2"].ToString(),
                    jArray["drwtNo3"].ToString(),
                    jArray["drwtNo4"].ToString(),
                    jArray["drwtNo5"].ToString(),
                    jArray["drwtNo6"].ToString(),
                    jArray["bnusNo"].ToString(),
                    jArray["drwNo"].ToString()) ;
                lottos.Add(temp);
                count++;
            }
            dataGridView2.DataSource = null;
            dataGridView2.DataSource = lottos;
        }
    }
}
