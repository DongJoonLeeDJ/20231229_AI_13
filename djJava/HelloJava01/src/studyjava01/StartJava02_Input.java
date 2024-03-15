package studyjava01;

import java.util.Scanner;

public class StartJava02_Input {
	//실수로 main체크 안 했다면 main 적고 ctrl space 눌러서 main부터 만들기
public static void main(String[] args) {
	//입력방법
	//Scanner 라는 java에서 제공하는 클래스를 활용해야 함
	Scanner s = new Scanner(System.in); //인스턴스 만들어야 함
	//빨간 줄이 그어지면 Scanner 뒤로 가서 ctrl space
	//import java.util.Scanner를 선택한다.
	//import는 c#의 using, c의 #include 같은 것
	
	
	//문자열 입력
	System.out.println("이름 입력");
	String name = s.nextLine();//C#의 Console.ReadLine()이랑 동일
	System.out.println("나이 입력");
	//정수 입력
	int age = Integer.parseInt(s.nextLine());//s.Next()도 있으나 쓰지 말 것
	//C#의 int.parse(Console.ReadLine())이랑 동일한 것
	
	System.out.println(name+age);
}

}
