package studyjava03;

import java.util.Scanner;

public class StudyJava06_sum {
	//java에는 포인터도 없음
	//다만 '참조'개념이 있고
	//배열 역시 이 개념을 적용하고 있음
	static int absValue(int num) { //절댓값으로 바꾸는 함수
	
		if(num<0)
			num*=-1;
		return num;
	}
	static void swap(int[] nums) {//둘 중 하나 더 클 때 바꿈
		int temp = nums[0];
		nums[0] = nums[1];
		nums[1] = temp;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int a = Integer.parseInt(s.nextLine());
		a = absValue(a);
		int b = Integer.parseInt(s.nextLine());
		b = absValue(b);
		int[] nums = new int[2];
		nums[0] = a;
		nums[1] = b;
		if(a>b) //첫번째꺼가 더 크면 swap
			swap(nums);
		
		int sum = 0;
		for(int i = nums[0]; i<=nums[1]; i++)
			sum+=i;
		System.out.println("sum="+sum);
		

	}

}

