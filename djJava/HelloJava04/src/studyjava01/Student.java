package studyjava01;

public class Student {
	private String name;
	private String hakbeon;
	private int age;
	
	//alt shift s 누르고 r 키 누른 다음
	//Select All 클릭 후 Generate
	//Getter, Setter 만들어 짐
	public String getHakbeon() {
		return hakbeon;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setHakbeon(String hakbeon) {
		this.hakbeon = hakbeon;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
	//alt shift s 누르고 o 누르고 
	//Select All 클릭 후 Generate
	//생성자
	public Student(String name, String hakbeon, int age) {
		this.name = name;
		this.hakbeon = hakbeon;
		this.age = age;
	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		//return getHakbeon()+","+getName()+","+getAge();
		return hakbeon+","+name+","+age;
	}
	
	

}
