package javastudy02_abstract;

public class Cat extends Animal{

	@Override
	public void sleep() {
		System.out.println("그르르렁 거리며 잠을 잡니다.");
	}

	@Override
	public void eat() {
		System.out.println(getName()+"고양이는 사료를 드십니다.");
	}
	
	public void jump(int m) {
		if(getAge()<=1 || getAge()>=10)
			System.out.println("점프 못 함");
		else
			System.out.println(m+"m 점프!");
	}

}
