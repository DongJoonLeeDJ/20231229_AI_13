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
	
	
	
	

}
