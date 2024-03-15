package studyjava01;

public class Horse extends Animal {

	//Animal(=조상클래스 혹은 super클래스 혹은 상위클래스 혹은 부모클래스)
	//C#에서는 base클래스라고도 불림
	
	//그리고 이걸 상속받은 클래스는
	//자식 클래스 혹은 자손클래스 혹은 sub클래스 혹은 this클래스 등....
	
	//Animal(=부모)와 말은 자는 게 다름
	//이런 상황에서 사용하는 개념이 바로 오버라이드
	//부모 클래스와 자식 클래스의 메서드 동작이 다를 때
	@Override //@ = 어노테이션, 컴파일러한테 참고사항을 전달해 줌
	public void sleep() {
		// TODO Auto-generated method stub
		//super.sleep(); // 조상 클래스의 sleep을 그대로 호출함
		System.out.println(getName()+" : 일어 서서 잠을 잡니다.");
	}
	
}
