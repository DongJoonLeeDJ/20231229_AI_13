package javastudy02_generic;

public class Student<T> {
	private String name;
	private int age;
	private T hakbeon; //Generic = 타입을 정하지 않음
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
	public T getHakbeon() {
		return hakbeon;
	}
	public void setHakbeon(T hakbeon) {
		this.hakbeon = hakbeon;
	}
	

}
