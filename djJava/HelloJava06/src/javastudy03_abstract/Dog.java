package javastudy03_abstract;

import javastudy02_abstract.Animal;

public class Dog extends Animal {

	@Override
	public void sleep() {
		System.out.println("주인 곁에서 잠을 잡니다...");

	}

	@Override
	public void eat() {
		System.out.println("고개를 그릇에 두고 밥을 먹습니다.");

	}
	//주인 이름
	private String masterName;
	public String getMasterName() {
		return masterName;
	}
	public void setMasterName(String masterName) {
		this.masterName = masterName;
	}
	public void bark() {
		System.out.println("멍멍멍");
	}

}
