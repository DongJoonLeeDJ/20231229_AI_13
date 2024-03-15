package studyjava02;

public class StartJava01_UseClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal a = new Animal();
		a.age = 5;
		a.id = "1";
		a.name = "멍뭉이";
		a.introduce(); //a라는 동물 소개
		Animal.sleep(10); //모든 동물은 잠을 자므로 공통 기능
		System.out.println(Animal.zooName);
		Animal.zooName = "네이처파크";
		System.out.println(Animal.zooName);
		
		
		//The constructor Student() is undefined
		//Student stu = new Student();
		Student stu = new Student("한형빈",35,"남성");
		
		Teacher t1 = new Teacher();
		Teacher t2 = new Teacher("이동준");
		Teacher t3 = new Teacher("이유나", "050", 30, "여성", "알고리즘");
		
		Vehicle v1 = new Vehicle();
//		v1.cc = 3000; //바로 대입하거나 바로 읽을 수 있는 걸 굳이 빙 돌아감
		v1.setCc(3000);
		v1.setName("g80");
		v1.setCompany("제네시스");
//		System.out.println(v1.cc);
		System.out.println(v1.getCc());
		System.out.println(v1.getName());
		System.out.println(v1.getCompany());

	}

}










