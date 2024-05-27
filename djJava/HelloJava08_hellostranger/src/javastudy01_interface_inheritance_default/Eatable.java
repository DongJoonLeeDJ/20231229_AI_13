package javastudy01_interface_inheritance_default;

public interface Eatable {
	
	void eat();
	void taste(String food);
	default void waitFood() { //default가 붙은 건 구현하지 않아도 됨
		System.out.println("잘먹겠습니다^^");
	}

}
