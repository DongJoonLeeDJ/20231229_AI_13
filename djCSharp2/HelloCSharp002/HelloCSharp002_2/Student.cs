using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp002_2
{
    //Student를 dataGridView에 보이게 하려면
    //프로그램을 미리 한 번 실행해보거나 아니면 빌드라도 한 번 해야 함
    
    public class Student
    {
        public string name { get; set; }
        public string hakbeon { get; set; }
        public string gender { get; set; }
        public string major;//{get;set;}이 없으면 dataGridView에서 나타나지 않음
        //java에서 getter, setter가 관례적인 것처럼, c#에서도 그냥 
        //{get;set;}을 써주는 게 좋다.
    }
}
