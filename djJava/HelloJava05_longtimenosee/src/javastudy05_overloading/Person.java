package javastudy05_overloading;

public class Person {
	private String name; //이름
	private int age; //나이
	private String gender; //성별
	private String sNum; //주민번호
	private String pNum; //여권번호
	
	//public Person() {} //이렇게 아무 것도 없는 생성자가 암묵적으로 있음
	
	//이렇게 생성자를 사용하는 순간, 아무 것도 없는 생성자는 사라져 버림
	public Person(String name) {
		this.name  = name;
	}
	//생성자는 오버로딩이 가능함
	public Person(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getsNum() {
		return sNum;
	}
	public void setsNum(String sNum) {
		this.sNum = sNum;
	}
	public String getpNum() {
		return pNum;
	}
	public void setpNum(String pNum) {
		this.pNum = pNum;
	}
	
	

}
