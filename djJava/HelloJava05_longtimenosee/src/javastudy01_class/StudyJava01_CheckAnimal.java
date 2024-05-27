package javastudy01_class;

public class StudyJava01_CheckAnimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal a = new Animal();
		//Animal a; 이렇게 선언하지 않고 new 키워드가 필요함
		//int aa;는 4byte 바로 할당해 줌
		//class를 이용해서 만든 변수는 new를 활용해서 선언해야 함
		//클래스이름() : 생성자
		//생성자 : 컴퓨터 메모리 내부에 메모리를 할당함
		//new Animal() = Animal 타입 변수를 저장할 메모리를 할당함
		
		//age값은 public, number는 default이므로 바로 접근이 됨
		a.age = 5;
		a.number = "038033";
		//name은 private이므로 public이 붙은 메서드를 통해서 값을 정하거나 읽음
		a.setName("멍멍이"); 
		
		System.out.println(a.age);
		System.out.println(a.number);
		System.out.println(a.getName());
		

	}

}














