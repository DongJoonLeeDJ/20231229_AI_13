using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arrnums = new int[5];
            Console.WriteLine("첫번째 값 입력!");
            arrnums[0] = int.Parse(Console.ReadLine());
            Console.WriteLine("두번째 값 입력!");
            bool result = int.TryParse(Console.ReadLine(), out arrnums[1]);

            if (!result)
                Console.WriteLine("두 번째 값은 잘못된 값으로 보여요!");

            try
            {
                int number = int.Parse(Console.ReadLine());
                arrnums[2] = number;
            }
            catch (Exception ex) //이벤트 때문에 주로 ex대신 e를 씀
            {
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.StackTrace);
                arrnums[2] = 0;
            }

            for (int i = 3; i < arrnums.Length; i++)
                arrnums[i] = int.Parse(Console.ReadLine());


            for (int i = 0; i < arrnums.Length; i++)
            {
                if (arrnums[i] < 0)
                    arrnums[i] *= -1; //음수가 있을 경우 -1을 곱하여 양수로 만든다.
            }

            int max = arrnums[0];
            for (int i = 1; i < arrnums.Length; i++)
            {
                if (max >= arrnums[i])
                    continue;
                max = arrnums[i];
            }
            Console.WriteLine("최댓값 : " + max);

            
            clearArr(arrnums); //배열 값을 0으로 초기화할 함수
            inputArr(arrnums); //배열에 값을 넣을 것
            reverseSign(arrnums); //배열의 값들에 대한 부호 정리(음수는 양수로)
            //int aa = 100;
            max = findMaxNum(arrnums); //최댓값 찾아서 리턴

            Console.WriteLine($"최댓값은 {max}입니다.");


            inputArr(arrnums, new Random());
            max = findMaxNum(arrnums);
            Console.WriteLine(string.Format("최댓값은 {0}입니다.", max));
        }

        

        private static int findMaxNum( int[] nums)
        {
            int max = nums[0];
            for (int i = 1; i < nums.Length; i++)
            {
                if (max < nums[i])
                    max = nums[i];
            }
            return max;
        }

        private static void reverseSign(int[] nums)
        {

            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] < 0)
                    nums[i] *= -1;
            }
        }

        //오버로딩 : 매개변수 다르면 함수 이름이나 생성자 이름 똑같아도 
        //서로 다른 걸로 친다....(C에 없고 java에 있는 개념)
        private static void inputArr(int[] nums, Random random)
        {
            for (int i = 0; i < nums.Length; i++)
            {
                nums[i] = random.Next(100); //0~99
            }
        }
        private static void inputArr(int[] nums)
        {

            for (int i = 0; i < nums.Length; i++)
            {
                try
                {
                    nums[i] = int.Parse(Console.ReadLine());
                }
                catch (Exception ex)
                {
                    Console.WriteLine("입력 중단!");
                    return;
                }
                finally
                {
                    Console.WriteLine("대신 이건 무조건 출력하게 되어 있다!!! 기억나지?");
                }
            }
        }

        private static void clearArr(int[] nums)
        {

            for (int i = 0; i < nums.Length; i++)
                nums[i] = 0;
        }
    }
}
