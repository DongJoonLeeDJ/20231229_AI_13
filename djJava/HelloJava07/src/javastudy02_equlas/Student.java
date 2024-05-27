package javastudy02_equlas;

public class Student {
	private String name;
	private int age;
	private String gender;
	
	
	public Student(String name, int age, String gender) {
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



	@Override
	public boolean equals(Object obj) {
		Student o = (Student)obj;
		return  (this.name.equals(o.getName()) && 
				this.gender.equals(o.getGender()) &&
				this.age==o.getAge());
				
		
		// TODO Auto-generated method stub
		//return super.equals(obj);
	}
}

















