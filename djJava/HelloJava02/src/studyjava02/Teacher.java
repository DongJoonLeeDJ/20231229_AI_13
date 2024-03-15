package studyjava02;

public class Teacher {
	public String name;
	public String Sabeon;
	public int age;
	public String gender;
	public String major;
	
	//C에는 없고 C#, Java에 있는 개념
	//오버로딩!
	//오버로딩이란? 메서드나 생성자에 적용되는 개념
	//매개변수의 개수나 타입만 다르면, 메서드(=함수)의 
	//이름이 똑같아도 다른 메서드로 간주함
	
	//선생님에 대해서 아무 것도 모를 경우
	public Teacher() {
		
	}
	//선생님의 성함만 알 경우
	public Teacher(String n) {
		name = n;
	}
	//선생님에 대해서 다 알 경우
	public Teacher(String n, String s, int a, String g, String m) {
		name=n;
		Sabeon = s;
		age = a;
		gender = g;
		major = m;
	}

}
