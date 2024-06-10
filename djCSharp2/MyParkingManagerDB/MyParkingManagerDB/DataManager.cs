using System;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyParkingManagerDB
{
    public class DataManager
    {
        public static List<ParkingCar> cars = new List<ParkingCar>();

        static DataManager()
        {
            Load();
        }

        public static void Load()
        {
            try
            {
                DBHelper.selectQuery();//매개변수 없으므로 전체 조회
                cars.Clear();
                //var 말고 DataRow 써야지 잘 됨
                foreach (DataRow item in DBHelper.dt.Rows)
                {
                    ParkingCar c = new ParkingCar();
                    c.parkingSpot = int.Parse(item["parkingspot"].ToString());
                    c.carNumber = item["carnumber"].ToString();
                    c.driverName = item["driverName"].ToString();
                    c.phoneNumber = item["phoneNumber"].ToString();
                    c.parkingTime = item["parkingTime"].ToString() == "" ? new DateTime()
                        : DateTime.Parse(item["parkingTime"].ToString());
                    cars.Add(c);
                }

            }
            catch(Exception ex) 
            { 
            }
        }


        //로그 파일 생성하는 메서드
        //메모장 등의 파일에 프로그램에서 필요할 법한
        //모든 기록들을 다 기록하는 메서드
        public static void printLog(string v)
        {
            DirectoryInfo di = new DirectoryInfo("pHistory");
            if (di.Exists == false)
                di.Create(); //해당 폴더 없으면 새로 만듦
            //@를 앞에 붙이면 역슬래시를 하나만 써도 된다.
            //끝에 붙은 true의 의미
            //새로운 내용이 추가되면 끝에다가 덧붙인다는 의미
            //false면 새로운 내용 올 때 기존 내용 덮어써버림
            //append? = true
            using (StreamWriter w = new StreamWriter(@"pHistory\pHistory.txt", true))
            {
                string now = $"[{DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff")}]";
                w.WriteLine(now+v);
            }
        }

        //주차 출차용 Save
        public static void Save(string ps, string cnum, string dname, string pnum, 
            bool isRemove=false)
        {
            try
            {
                DBHelper.updateQuery(ps, cnum, dname, pnum, isRemove);
            }
            catch(Exception ex)
            {
                printLog("Save" + isRemove + ex.StackTrace);
            }
        }
    }
}
