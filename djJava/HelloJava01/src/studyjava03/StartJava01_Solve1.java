package studyjava03;

import java.util.Scanner;

public class StartJava01_Solve1 {

	public static void main(String[] args) {
		//A: 한 번에 올라가는 높이
		//B: 미끄러지는 높이
		//V: 총 높이
		
		//1. if문 만으로 푸는 방법
		Scanner s = new Scanner(System.in);
		System.out.println("한 번에 올라갈 수 있는 높이는?");
		int a = Integer.parseInt(s.nextLine());
		System.out.println("미끄러지는 높이는?");
		int b = Integer.parseInt(s.nextLine());
		System.out.println("총 높이는?");
		int v = Integer.parseInt(s.nextLine());
		
		int day = (v-b)/(a-b); //며칠 걸릴 것인가?
		if((v-b)%(a-b)!=0)
			day = (v-b)/(a-b) + 1;
		System.out.println("달팽이가 올라가는 데 걸리는 날짜 : " + day);
		
		//반복문과 조건문 활용해보기
		int d = 0; //소요일
		int distance = 0;//길이
		while(true) //무한 반복
		{
			d++;
			distance += a;
			if(distance>=v)
				break;
			distance -= b;
		}
		System.out.println("day="+d);
		
		
	}

}




