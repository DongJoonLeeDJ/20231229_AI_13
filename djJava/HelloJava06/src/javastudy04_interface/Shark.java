package javastudy04_interface;

import javastudy02_abstract.Animal;

//Bornable은 구현하지 않음 -> 포유류는 아님...
public class Shark extends Animal implements Swimable, Huntable{

	@Override
	public void hunt(String target) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void swimming() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void eat() {
		// TODO Auto-generated method stub
		
	}

}
