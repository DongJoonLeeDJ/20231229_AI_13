using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp002_3
{
    public class Lotto 
    {
        //ctrl d 누르면 코드 1줄이 복사&붙여넣기
        public string drwtNo1 { get; set; }//로또 번호 1번째 자리
        public string drwtNo2 { get; set; }//로또 번호 2번째 자리
        public string drwtNo3 { get; set; }//로또 번호 3번째 자리
        public string drwtNo4 { get; set; }//로또 번호 4번째 자리
        public string drwtNo5 { get; set; }//로또 번호 5번째 자리
        public string drwtNo6 { get; set; }//로또 번호 6번째 자리
        public string bnusNo { get; set; }//보너스 번호
        public string drwNo { get; set; } //회차

        //alt enter 치고 생성자 생성 선택하면 됨
        public Lotto(string drwtNo1, string drwtNo2, string drwtNo3, string drwtNo4, string drwtNo5, string drwtNo6, string bnusNo, string drwNo)
        {
            this.drwtNo1 = drwtNo1;
            this.drwtNo2 = drwtNo2;
            this.drwtNo3 = drwtNo3;
            this.drwtNo4 = drwtNo4;
            this.drwtNo5 = drwtNo5;
            this.drwtNo6 = drwtNo6;
            this.bnusNo = bnusNo;
            this.drwNo = drwNo;
        }

    }
}
