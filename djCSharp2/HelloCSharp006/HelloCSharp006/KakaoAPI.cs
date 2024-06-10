using System.Web.Script.Serialization;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp006
{
    public class KakaoAPI
    {
        public static List<Locale> Search(string text)
        {
            List<Locale> list = new List<Locale>();
            string site = "https://dapi.kakao.com/v2/local/search/keyword.json";
            string query = $"{site}?query={text}";
            string restApiKey = "b4f212dc47cafb717bbc7de142fb854e";
            string Header = $"KakaoAK {restApiKey}";

            //요청 생성
            WebRequest req = WebRequest.Create(query);
            req.Headers.Add("Authorization", Header);

            //응답받기
            WebResponse resp = req.GetResponse(); //응답 요청
            Stream stream = resp.GetResponseStream();
            StreamReader sr = new StreamReader(stream, Encoding.UTF8);

            string json = sr.ReadToEnd(); //응답으로 온 json 글자를 읽어 옴

            //using System.Web.Script.Serialization;
            //안 될 경우
            //https://stackoverflow.com/questions/19467109/how-to-fix-error-type-system-web-script-serialization-javascriptserializer-is
            //프로젝트 마우스 오른쪽 클릭 -> 추가 -> 참조 -> 프레임워크
            //여기서 System.Web.Extensions를 추가 
            JavaScriptSerializer js = new JavaScriptSerializer();
            
            //dynamic = javaScript의 var나 let이랑 같음
            //C#의 var는 한 번 타입 정해지면 그 타입이 그대로 가지만
            //C#의 dynamic은 타입이 정해져도 그 다음에 또 바뀔 수가 있음
            dynamic dob = js.Deserialize<dynamic>(json);
            dynamic docs = dob["documents"];
            object[] buf = docs;
            for(int i = 0; i < buf.Length; i++)
            {
                string localname = docs[i]["place_name"];
                double x = double.Parse(docs[i]["x"]);
                double y = double.Parse(docs[i]["y"]);
                list.Add(new Locale(localname, y, x));
            }


            return list;
        }
    }
}
