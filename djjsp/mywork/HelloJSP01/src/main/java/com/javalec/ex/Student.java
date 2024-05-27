package com.javalec.ex;

public class Student{
	
	private String name;//이름
	private int age;//나이
	private String number;//학번
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		//return super.toString(); 패키지명.클래스명@고유코드
		//return getClass().getName() + "@" + Integer.toHexString(hashCode());
		return "이름:"+getName()+",나이:"+getAge()+"번호:"+getNumber();
	}
	
	
	//alt shift s 누르고 o -> Omit... 체크 -> Select All -> Generate
	public Student(String name, int age, String number) {
		this.name = name;
		this.age = age;
		this.number = number;
	}
	
	
	//alt shift s 누르고 r -> select All -> generate
	public int getAge() {
		return age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}
	
	

}
