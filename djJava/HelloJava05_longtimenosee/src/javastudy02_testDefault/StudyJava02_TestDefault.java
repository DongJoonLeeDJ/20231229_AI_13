package javastudy02_testDefault;

import javastudy01_class.Animal;

public class StudyJava02_TestDefault {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal a = new Animal();
		a.age = 35;
		//default 즉 접근 제한자가 없는 건 다른 패키지에서는 못 불러옴
//		a.number = 
		a.setName("이동준");
		System.out.println(a.age);
		System.out.println(a.getName());
		a.age = -34; //이거에 대한 별도의 예외처리를 또 만들어야 함
//		System.out.println(a.number);

	}

}
