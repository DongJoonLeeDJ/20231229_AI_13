package javastudy04_testInheritance;

import javastudy03_inheritance.Bird;
//extends : 확장하다
//Bird를 확장하다 -> Bird의 기능도 갖고 추가적인 기능을 더 가질 수 있음
public class Crow extends Bird {
	
	public void hunt() {
		Fly(); //Bird를 상속받았으므로 다른 패키지라고 할 지라 Fly 메서드를 사용할 수 있음
		System.out.println("먹이를 낚아 챕니다.");
		Fly();
	}
	public void cry() {
		System.out.println("까악 까악 까악");
	}

}
