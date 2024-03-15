package studyjava03;

import java.util.Scanner;

public class StartJava04_Solve3_2 {
	
	//C#,Java에서는 배열이 이미 길이 정보도 가지고 있음
	//C랑 다르게 길이 정보 굳이 넘기지 않아도 됨
	static boolean isDuplicate(int[] arr, int num)
	{	
		for(int i = 0; i<arr.length; i++)
		{
			if(arr[i]==num) //해당 번호가 있을 경우
				return true;
		}
		return false;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int[] nums = new int[5];
		for(int i = 0; i<5; i++)
		{
			int number = Integer.parseInt(s.nextLine());
			if(isDuplicate(nums, number)) //중복
			{
				System.out.println("중복!!");
				i--;
				continue;
			}
			nums[i] = number;
		}
		int max = nums[0];
		int min = max;
		for(int item : nums)
		{
			if(item>max)
				max = item;
			if(item<min)
				min = item;
		}
		System.out.println("max="+max+",min="+min);

	}

}














