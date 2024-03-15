package studyjava02;

public class StartJava01_If_Loop {

	public static void main(String[] args) {
		//조건문 및 반복문
		//삼항연산자, if, switch... c와 c#이랑 동일함
		int a = 10;
		if(a%2==0) //결과 코드가 1줄이면 중괄호 생략 가능
			System.out.println("a는 짝수");
		if(a>0) {
			System.out.println("a는 0보다 큼");
			System.out.println("a="+a);
		}
		
		//for while do while 똑같이 있음
		//break와 continue도 그대로 있음
		int sum = 0;
		for(int i = 1; i<=10; i++)
		{
			sum+=i;
			if(i!=1)
				System.out.println("1부터 " + i +"까지의 합="+sum);
		}
		System.out.println("총 합 : " + sum);

	}

}
