package javastudy05_overloading;

public class Volunteer {
	
	private String name;
	private int age;
	private String gender;
	
	//아무 정보 없어도 등록하게 해 줌
	public Volunteer() {
		
	}
	//이름만 알아도 등록시켜 줌
	//단 이름과 성별 둘 다 동일한 String 타입이므로
	//이름만 아는 사람 혹은 성별만 아는 사람은 구분해줄 수 없다.
	public Volunteer(String name) {
		this.name = name;
	}

	public Volunteer(int age) {
		this.age = age;
	}
	public Volunteer(String name, int age) {
		this.name = name;
		this.age = age;
	}
	public Volunteer(int age, String gender) {
		this.age = age;
		this.gender = gender;
	}
	public Volunteer(String name, String gender) {//사실 이 둘도 구분X
		this.name = name;
		this.gender = gender;
	}
	
	public Volunteer(String name, int age, String gender) {
		this.name = name;
		this.age = age;
		this.gender = gender;
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
	
	

}
