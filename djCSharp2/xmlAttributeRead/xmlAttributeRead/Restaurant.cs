using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace xmlAttributeRead
{
    public class Restaurant
    {
        public string num { get; set; } //번호
        public string menu { get; set; } //메뉴
        public string homaPage { get; set; } //홈페이지
        public string area { get; set; } //지역
        public string address { get; set; } //주소
        public string name { get; set; } //식당명
        public string hp { get; set; } //연락처

        public Restaurant(string num, string menu, string homaPage, string area, string address, string name, string hp)
        {
            this.num = num;
            this.menu = menu;
            this.homaPage = homaPage;
            this.area = area;
            this.address = address;
            this.name = name;
            this.hp = hp;
        }
    }
}
