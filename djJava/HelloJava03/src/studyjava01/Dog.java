package studyjava01;
//이름,나이 그리고 털색깔
//잠자기 밥먹기
//짖기
//생성자는 그냥 비어있는 생성자 즉 기본 생성자 사용 
public class Dog extends Animal{
	//private String name;
	//private int age;
	private String hairColor;
//	public String getName() {
//		return name;
//	}
//	public void setName(String name) {
//		this.name = name;
//	}
//	public int getAge() {
//		return age;
//	}
//	public void setAge(int age) {
//		this.age = age;
//	}
	public String getHairColor() {
		return hairColor;
	}
	public void setHairColor(String hairColor) {
		this.hairColor = hairColor;
	}
	
//	public void sleep() {
//		System.out.println(name+":잠자기");
//	}
//	public void eat() {
//		System.out.println(name+":식사");
//	}
//	public void bark() {
//		System.out.println(name+":멍멍멍");
//	}
	public void bark() {
		System.out.println(getName()+":멍멍멍");
	}

}
















