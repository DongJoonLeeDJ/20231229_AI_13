package studyjava02;

public class Student {
	public String name;
	public int age;
	public String gender;
	
	//생성자를 명시적으로 정의함
	//생성자에 매개변수를 넣을 수 있음
	//이렇게 생성자를 명시할 경우
	//기존에 암묵적으로 만들어졌던 빈 생성자는 사라지게 됨
	public Student(String name, int age, String gender) {
		//this는 클래스 자신을 의미함
		this.name=name;
		this.age=age;
		this.gender=gender;
	}

}
