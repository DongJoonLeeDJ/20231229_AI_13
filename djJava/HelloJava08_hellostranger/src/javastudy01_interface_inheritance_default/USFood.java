package javastudy01_interface_inheritance_default;

public class USFood implements Cookable{

	@Override
	public void waitFood() {
		// TODO Auto-generated method stub
		Cookable.super.waitFood();
	}
	
	@Override
	public void eat() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void taste(String food) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public int cookFood(String food) {
		// TODO Auto-generated method stub
		return 0;
	}

}
