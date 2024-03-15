package studyjava01;

import java.util.*;//util 패키지 안에 있는 것들 다 불러오는 것

public class StartJava03_Solve {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("첫번째 수 입력");
		String s1 = s.nextLine();
		System.out.println("두 번째 수 입력");
		String s2 = s.nextLine(); //정수는 nextInt 써도 되지만 
		//C언어의 문자 scanf 입력과 유사한 이슈가 있음
		
		//첫번째 방법 = /와%이용하기
		int num1 = Integer.parseInt(s1);
		int num2 = Integer.parseInt(s2);
		System.out.println(num1 * (num2%10));//472 * 5
		System.out.println(num1 * ((num2/10)%10));//472 * 8
		System.out.println(num1*(num2/100));//472*3
		System.out.println(num1*num2);
		//두번째 방법 = ASCII 코드 이용하기
		System.out.println(num1 * (s2.charAt(2)-'0')); //472 * ('5'-'0')
		System.out.println(num1 * (s2.charAt(1)-'0')); //472 * ('8'-'0')
		System.out.println(num1 * (s2.charAt(0)-'0')); //472 * ('3'-'0')
		System.out.println(num1*num2);
		
		System.out.println("숫자를 입력하세요(1~6 사이의 수 입력)");
		int num = Integer.parseInt(s.nextLine());
		int a = (num*5)%7;
		int b = (a*5)%7;
		int c = (b*5)%7;
		int d = (c*5)%7;
		int e = (d*5)%7;
		System.out.println(num + " " + a+ " " + b + " " + c + " " + d+ " " + e);
		

	}

}
