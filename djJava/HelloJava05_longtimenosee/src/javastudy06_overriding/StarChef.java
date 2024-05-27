package javastudy06_overriding;

//오버라이딩(Overriding)
//기존의 메서드를 덮어쓰고 새로운 기능을 수행하거나
//기존 기능 + 새로운 기능을 수행하는 것
public class StarChef extends Chef{
	
	public StarChef(String mainMenu) {
		setMainMenu(mainMenu);
	}

	//오버로딩 : 메서드 이름이 같으나 매개변수 개수나 타입이 다름
	//오버라이딩 : 메서드 이름과 매개변수의 개수와 타입 모두 다 똑같음
	@Override
	public void cook() {
		// TODO Auto-generated method stub
		System.out.println("현란한 조명과 함께...");
		super.cook();
	}
	
	@Override
	public void taste() {
		// TODO Auto-generated method stub
		//super.taste();
		System.out.println("뭔가 있어보이는 표정으로 흠... 합니다.");
	}
}





