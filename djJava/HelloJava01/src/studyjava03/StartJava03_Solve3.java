package studyjava03;

import java.util.Scanner;

public class StartJava03_Solve3 {

	public static void main(String[] args) {
		//한 줄에 5개 정수 입력받는 방법 있음
		//nextLine대신 next를 쓰면 됨
		//다만 이 방법은 nextInt와 동일한 문제점을 가지고 있음
		//10 2 5 35 20 => 이런식으로 한 줄 입력 가능함
		Scanner s = new Scanner(System.in);
		System.out.println("정수 입력");
		//int aaa = s.nextInt();

		System.out.println("정수 5개 입력");
		int[] nums = new int[5];
		for(int i = 0; i<5; i++)
			nums[i] = Integer.parseInt(s.next());//10 2 5 35 20 => 이런식으로 한 줄 입력 가능함
			//nums[i] = s.nextInt();
		
		//String ex = "김동현";
		//int len = ex.length();//문자열 길이 구하기
		
		int max = nums[0];
		int min = max;
		for(int i = 1; i<nums.length;i++)
		{
			if(max<nums[i])
				max = nums[i];
			if(min>nums[i])
				min = nums[i];
		}
		System.out.println("max="+max+",min="+min);
		
		System.out.println("당신의 이름은 무엇인가요?");
		//next나 nextInt로 입력받고 나서
		//그 다음에 nextLine으로 입력을 받게 되면
		//scanf,rewind 이슈처럼 공백이 들어감
		String name = s.nextLine();
		//참고로 해결 방법은 s.nextLine()을 한 번 더 써야 함
		name = s.nextLine();
		
		System.out.println("당신의 이름은 " + name+"입니다.");
		
		

 	}

}










