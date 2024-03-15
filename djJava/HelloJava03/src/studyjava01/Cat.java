package studyjava01;
//이름,나이 그리고 눈색깔
//잠자기 밥먹기
//야옹거리기
//생성자는 그냥 비어있는 생성자 즉 기본 생성자 사용 

//extends : 상속의 키워드
//extends 뜻 : 확장하다
//즉 Animal에서 더 확장된 클래스가 바로 Cat
//Animal은 이름,나이,자기,먹기 기능만 있었는 데 고양이는 여기에 야옹거리기랑 눈색깔이 추가(=확장)됨
public class Cat extends Animal{
//	private String name;
//	private int age;
	private String eyeColor;
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
	public String getEyeColor() {
		return eyeColor;
	}
	public void setEyeColor(String eyeColor) {
		this.eyeColor = eyeColor;
	}
//	public void sleep() {
//		System.out.println(name+":잠자기");
//	}
//	public void eat() {
//		System.out.println(name+":식사");
//	}
//	public void meow() {
//		System.out.println(name+":야옹 야옹");
//	}
	
	public void meow() {
		System.out.println(getName()+":야옹야옹");
	}
	
}









