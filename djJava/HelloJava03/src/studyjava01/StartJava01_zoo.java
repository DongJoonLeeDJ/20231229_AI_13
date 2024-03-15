package studyjava01;

public class StartJava01_zoo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Animal 클래스 만들어두면 나머지 동물들 클래스 만들 때
		//이름, 나이처럼 겹치는 것들은 또 써줄 필요가 없음!!!
		Animal a = new Animal();
		a.setName("삐약이");
		a.setAge(1);
		a.eat();
		a.sleep();
		
		Cat c = new Cat(); //Cat 클래스 안에는 name, age, eat, sleep이 안 써 있음
		c.setName("콩이"); //Animal에 있는 name, getName을 그대로 쓸 수 있음
		c.setAge(5);//Animal에 있는 age, getAge를 그대로 쓸 수 있음
		c.eat();//Animal에 있는 eat을 그대로 쓸 수 있음
		c.sleep();//Animal에 있는 sleep을 그대로 쓸 수 있음
		c.meow();//Cat에만 있는 meow도 당연히 쓸 수 있음
		c.setEyeColor("odd eye");//Cat에만 있는 eyecolor 읽고 쓰기도 가능함
		
		Dog d = new Dog();
		d.setName("뭉치");
		d.setAge(7);
		d.setHairColor("검은색");
		d.eat();
		d.sleep();
		d.bark();
		
		Cow cow1 = new Cow();
		cow1.setAge(0);//송아지
		cow1.setName("몽이");
		cow1.setKg(1.1);
		cow1.eat();
		cow1.sleep();
		cow1.makeMilk();
		
		cow1.setAge(1);
		cow1.makeMilk();
		
		cow1.setAge(2);
		cow1.makeMilk();
		
		Maltese m = new Maltese();
		m.setName("멍뭉이");
		m.setAge(17);
		m.charming();
		m.setHairColor("빨강");
		m.charming();
		
		Horse h = new Horse();
		h.setName("강남스타일춤추는말");
		h.sleep();
		
		// 모~~~든 클래스는 이미 조상 클래스가 있다.
		System.out.println(a); //컴파일러에서 자동으로 toString 붙임
		System.out.println(a.toString());
		System.out.println(a.getName());
		System.out.println(a.getAge());
		
		Animal a1 = new Animal();
		a1.setName("꼬꼬");
		a1.setAge(10);
		Animal a2 = new Animal();
		a2.setName("꼬꼬");
		a2.setAge(5);
		System.out.println(a1.equals(a2));
		a2.setName("꾸꾸");
		a2.setAge(10);
		System.out.println(a1.equals(a2));
		
		//상속
		//오버라이딩 (!= 오버로딩과 다름)
		//오버로딩 : 메서드나 생성자의 이름이 같아도
		//매개변수 개수나 타입이 다르면 서로 다른 것으로 간주
		//오버라이딩 : 조상 클래스의 메서드를 자손 클래스가
		//재정의하는 것
		//오버라이딩 = Override 
		//오버라이팅 = 덮어쓰기 = Overwrite
		
		//다형성 = '다'양한 '형'태로 변할 가능'성'
		//동물 = 새
		//동물 = 개
		//동물 = 고양이
		//새 is 동물, 개 is 동물, 고양이 is 동물 이 관계가 성립됨
		//반대는 안 됨.... 동물 is 새... 등 안 됨
		
		
		//왼쪽 클래스는 조상, 오른쪽은 자손
		//이런 형태를 다형성이라고 함
		
		//myanimal은 Animal 타입이다.
		//그러나 Dog로 형변환은 가능함
		//Cat 등의 다른 동물로는 형변환 불가능
		Animal myanimal = new Dog();
		
		Animal youranimal = new Cat();
		//다형성에 의해서 Animal 타입 배열(조상 클래스 타입 배열)에
		//그 클래스의 자손들은 전부 다 들어갈 수 있음
		Animal[] zoo = new Animal[6];
		zoo[0] = myanimal;
		zoo[1] = youranimal;
		zoo[2] = new Animal();
		zoo[3] = new Cow();
		zoo[4] = new Horse();
		zoo[5] = new Maltese();
		
		//Animal 클래스에 있는 거 다 불러올 수 있음
		myanimal.setName("도도");
		myanimal.setAge(7);
		myanimal.sleep();
		myanimal.eat();
		//타입 체크 및 타입 변환
		if(myanimal instanceof Dog) { //인스턴스 타입 체크
			//Dog에만 있는 걸 가져 오려면 형변환해야 함
			((Dog)(myanimal)).bark();
			((Dog)(myanimal)).setHairColor("파랑");
		}
		if(myanimal instanceof Cat) {
			((Cat)(myanimal)).meow();
		} else {
			System.out.println("myanimal은 고양이는 아님");
		}
		
	}

}









