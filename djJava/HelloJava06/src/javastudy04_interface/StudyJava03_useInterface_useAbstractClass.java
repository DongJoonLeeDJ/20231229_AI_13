package javastudy04_interface;

import javastudy02_abstract.Animal;

public class StudyJava03_useInterface_useAbstractClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//추상 클래스를 이용해서 1회용 클래스를 만들기 가능
		//익명 클래스라고 함... 즉 이름이 없는 클래스
		Animal hamster = new Animal() {
			
			@Override
			public void sleep() {
				// TODO Auto-generated method stub
				System.out.println("햄스터처럼 잠을 자요");
			}
			
			@Override
			public void eat() {
				// TODO Auto-generated method stub
				System.out.println("먹이 주머니에 저장하며 먹어요.");
				
			}
		};
		hamster.born();
		hamster.sleep();
		hamster.eat();
		//인터페이스 역시도 익명 클래스 만들기 가능
		//인터페이스만으로는 추상클래스와 마찬가지로 인스턴스 만들기 불가능
//		Swimable sr = new Swimable();
		Swimable swimRobot = new Swimable() {
			
			@Override
			public void swimming() {
				// TODO Auto-generated method stub
				System.out.println("로봇1 헤엄치는 중");
			}
		};
		//람다, 메서드가 하나 있는 인터페이스에 한해서는 아래와 같이 축약이 가능
		//람다 = 화살표 모양 = @Override, public 등 모두 생략함
		Swimable swimRobot2 = () -> {System.out.println("로봇2 헤엄치는 중");};
		
		swimRobot.swimming();
		swimRobot2.swimming();
		Huntable hunter1 = new Huntable() {
			
			@Override
			public void hunt(String target) {
				System.out.println(target+"사냥 준비 완료");
				
			}
		}; 
		hunter1.hunt("벌레");
		
		Huntable hunter2 = (x) -> {System.out.println("사냥 목표 : " + x);};
		hunter2.hunt("야생 다람쥐");
		
		Swimable babyShark = new Shark(); //인터페이스에서도 다형성 적용됨

	}

}
