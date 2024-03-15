package studyjava01;
//개와 고양이 등 모든 동물이 공통적으로 갖는 속성이나 기능을 가지고 있는 클래스
//이 클래스를 활용하면 다른 클래스를 적을 때 서로서로 차이가 있는 부분만
//구현할 수 있다.
//이 클래스를 활용한다함을 우리는 "상속(Inheritance)"라고 부른다.
public class Animal {
	private String name;
	private int age;
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
	public void sleep() {
		System.out.println(name+":잠자기");
	}
	public void eat() {
		System.out.println(name+":밥먹기");
	}
	
	//조상클래스인 Object가 가지고 있는 toString을
	//오버라이드 하면
	//내가 원하는 형태로 출력 가능함
	@Override
	public String toString() {
		return "name="+name+",age="+age;
		// TODO Auto-generated method stub
		//return super.toString();
	}
	//equals를 정의해주면 이름만 같으면 두 동물은
	//같은 동물로 간주가 됨
	//추후에 학생관리등 프로그램 만들 때도 참고할 수 있음
	@Override
	public boolean equals(Object obj) {
		Animal temp = ((Animal)obj);
		return name.equals(temp.getName());
		// TODO Auto-generated method stub
		//return super.equals(obj);
	}

}











