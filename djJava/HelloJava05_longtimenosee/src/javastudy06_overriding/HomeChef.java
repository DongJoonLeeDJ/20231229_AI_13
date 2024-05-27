package javastudy06_overriding;

public class HomeChef extends Chef{
	
	@Override
	public void cook() {
		System.out.println("오늘의 일용할 양식을 요리합니다.");
	}
	@Override
	public void taste() {
		System.out.println("배우자보고 맛있냐 묻지만 사실상 맛있다는 말을 정성스럽게 하라는 강요의 암묵의 압박입니다.");
	}
	
	public void FoodSetting(int count) {
		System.out.println(count+"개의 수저를 세팅하라고 지시합니다.");
	}

}












