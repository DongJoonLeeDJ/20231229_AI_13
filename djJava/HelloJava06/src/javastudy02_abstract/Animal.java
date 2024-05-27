package javastudy02_abstract;

//추상 클래스 : 추상적인 클래스, 추상적인 개념
//직접적으로 인스턴스 생성이 불가능
//Animal a = new Animal(); // <- 이거 안 됨

//'동물'이라는 이름의 동물은 없다
//다만 '동물' 특징을 갖는 개, 고양이 등등이 있음...
public abstract class Animal {
	
	private String name;
	private int age;
	public static String color; //클래스변수나 클래스 메서드는 
	//조상클래스와 자손 클래스가 모두 공유를 함
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
	public abstract void sleep(); //Animal을 상속받은 클래스에서
 	public abstract void eat(); //반드시 구현해야 하는 것들!!
	public void born() {
		System.out.println("응애 응애 태어났어요!");
	}

}








