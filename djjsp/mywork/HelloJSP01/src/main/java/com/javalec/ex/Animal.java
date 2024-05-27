package com.javalec.ex;

public class Animal {
	private String kinds;//종류
	private String name; //이름
	private int age; //나이
	private String number; //번호
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "종류:"+kinds+",이름:"+name+",나이:"+age+",번호:"+number;
	}
	public Animal(String kinds, String name, int age, String number) {
		this.kinds = kinds;
		this.name = name;
		this.age = age;
		this.number = number;
	}
	public String getKinds() {
		return kinds;
	}
	public void setKinds(String kinds) {
		this.kinds = kinds;
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
	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}
	
}
