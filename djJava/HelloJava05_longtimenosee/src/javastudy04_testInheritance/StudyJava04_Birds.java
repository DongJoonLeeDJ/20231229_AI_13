package javastudy04_testInheritance;

import javastudy03_inheritance.Bird;

public class StudyJava04_Birds {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bird b = new Bird();
//		b.Fly(); //다른 패키지에 있으므로 이젠 진짜로 Bird를 상속받은 데에서만 쓸 수 있음

		Crow c = new Crow();
		c.setName("까악이");
		c.setColor("검은색");
		c.setHeight(12.5);
		c.hunt();
		c.cry();
	}

}
