using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp006
{
    public class Locale
    {
        public string name { get; set; } //장소명
        public double lat { get; set; } //Y
        public double lng { get; set; } //X

        //alt enter -> 생성자 생성 -> 확인
        public Locale(string name, double lat, double lng)
        {
            this.name = name;
            this.lat = lat;
            this.lng = lng;
        }

        public override string ToString()
        {
            return name;
        }
    }
}
