package javastudy06_overriding;

public class StudyJava07_FoodSchool {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Chef c = new Chef();
		c.setMainMenu("라면");
		c.cook();
		c.taste();
		StarChef sc = new StarChef("김치볶음밥");
		sc.cook();
		sc.taste();
		HomeChef hc = new HomeChef();
		hc.cook();
		hc.taste();
		
		//다형성 : 다양한 형태로 변할 가능성
		//왼쪽 조상 클래스(혹은 인터페이스) = 오른쪽 자손 클래스
		Chef cc = new HomeChef(); //인스턴스를 만든다.
		if(cc instanceof HomeChef) //new HomeChef인지 체크
			((HomeChef)(cc)).FoodSetting(3);//형 변환 후 불러오기
		//	HomeChef에만 있는 기능
		
		//		cc.FoodSetting(3); // <- 요건 안 됨
		//클래스 메서드랑 인스턴스 메서드... 
		
		//추상 클래스		
		
		//인터페이스
		
		//Map
	}

}










