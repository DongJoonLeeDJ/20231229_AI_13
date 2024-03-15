package studyjava02;

public class Animal {
	
	public String name;
	public int age;
	public String id;
	public static String zooName = "용인에버랜드";//공통적인 변수
	
	public void introduce() {
		System.out.println("이름:"+name);
		System.out.println("나이:"+age);
		System.out.println("ID:"+id);
	}
	public static void sleep(int hour) {
		System.out.println(hour+"시간 동안 잠을 잡니다.");
	}
	
	//생성자
	//평소엔 생성자를 굳이 적지 않아도 아래와 같은 코드가
	//자동적으로(암묵적으로) 포함이 된 것
	public Animal() {	
	}
	
	
	//오버로딩
	
	//접근제한자
	
	
	
	

}










