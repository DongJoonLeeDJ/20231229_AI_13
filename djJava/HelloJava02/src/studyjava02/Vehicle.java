package studyjava02;
//접근 제한자
//접근을 제한함
//접근 : 읽거나 쓰는 작업
//public-protected-private
//c#에서는 웬만해서는 다 public만 씀
//Java에서는 public, private을 주로 씀

//public : 공공의, 다른 클래스에서도 읽거나 쓰는 게 가능
//StartJava01_UseClass에서 Animal, Student, Teacher 클래스의 name등 수정하거나
//혹은 읽는 게 가능 함

//private : 다른 클래스에서 읽거나 쓰는 게 불가능
//그래서 일반적으로 Java는 class 만들 때 속성들을 private으로 만들고
//public 메서드로 읽거나 씀
//읽는 걸 Getter라고 하고, 쓰는 걸 Setter라고 함
public class Vehicle {
	private String name;
	private int cc;
	private String company;
	
	//alt shift s 누르고 r 키 누르기
	//마우스 오른쪽 클릭 -> Source -> Generate Getters and Setters...
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getCc() {
		return cc;
	}
	public void setCc(int cc) {
		this.cc = cc;
	}
	public String getCompany() {
		return company;
	}
	public void setCompany(String company) {
		this.company = company;
	}
	
	//alt shift s 누르고 o키
	//마우스 오른쪽 클릭 -> Source -> Generate Constructor using Fields...
	public Vehicle(String name, int cc, String company) {
		this.name = name;
		this.cc = cc;
		this.company = company;
	}
	public Vehicle(String name) {
		this.name = name;
	}
	public Vehicle() {
	}
	
	
	//오버로딩
	//생성자나 메서드의 이름이 같아도 매개변수의 타입이나 개수가 다르면
	//서로 다른 생성자, 서로 다른 메서드로 취급한다!!!
	public void introduce(String name, int cc, String company)
	{
		System.out.println("현재 이름에서 바꾸고 싶은 이름 : " + name);
		System.out.println("현재 cc에서 바꾸고 싶은 cc : " + cc);
		System.out.println("현재 회사명에서 바꾸고 싶은 회사명 : " + company);
		
		int gap = cc-this.cc;
		if(gap<0)
			gap*=-1;
		System.out.println("현재 cc와 희망 cc간의 차이 : " + gap );
		System.out.println("현재 차이름과 현재 회사명 :" + this.name+","+this.company);
		
	}
	public void introduce(String name)
	{
		System.out.println("내 차 이름 : " + this.name);
		System.out.println("니 차 이름 : " + name);
	}
	
	public static void run(int cc, String name) {
		System.out.println(name+"자동차가 " +cc+"cc로 달란다.");
	}
	
	
	

}







