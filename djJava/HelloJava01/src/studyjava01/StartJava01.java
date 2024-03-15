package studyjava01;

public class StartJava01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//sysout 적은 다음 ctrl + Space
		//저장하는 건 ctrl + s 키 누르면 저장됨
		System.out.println("안녕"); //ctrl f11로 실행
		
		//변수 타입은 C#이랑 거의 동일함
		int a = 10;
		char b = '가';
		double p = 3.14;
		String ldj = "이동준"; //C#은 string이랑 String 둘 다 OK
		//java에서는 String의 s를 무조건 대문자로 해야 함
		
		System.out.print(ldj); //ln이 빠지게 되면 자동 줄 바꿈 없음
		System.out.print(b);
		System.out.print(p);
		System.out.print(a);
		System.out.println();//한 줄 띄기
		
		//ldj의 맨 앞 글자 가져오는 법
		//C#에서는 ldj[0]처럼 바로 배열 연산을 썼다면
		//Java에서는 그게 안 됨
		//charAt을 써줘야 함
		System.out.println(ldj.charAt(0));
		//문자열 덧셈 연산도 됨(글자 이어붙이기)
	}

}
