using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyParkingManagerDB
{
    public class ParkingCar
    {
        public int parkingSpot { get; set; }//주차공간 번호, PK
        public string carNumber { get; set; }//차번호
        public string driverName { get; set; }
        public string phoneNumber { get; set; }
        public DateTime parkingTime { get; set; }
    }
}
