package javastudy01_static;

public class StudyJava01_RectangleTest {
	
	private void testMethod() {
		System.out.println("안녕");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle.setColor("blue");
		
		Rectangle r1 = new Rectangle(10,5);
		Rectangle r2 = new Rectangle(2,-5);
		Rectangle r3 = new Rectangle(-2,-3);
		
		int area1 = r1.getArea();
		int area2 = r2.getArea();
		int area3 = r3.getArea();
		
		System.out.println(area1);
		System.out.println(area2);
		System.out.println(area3);
		
		int area = Rectangle.getArea(7, 8);
		System.out.println(area);
		System.out.println(Rectangle.getColor());
		
		//java에서만 해당됨(C#은 아님)
		r1.setColor("red"); //공통된 값이라서 어디에서 바꾸든 다 바뀜
		System.out.println(r1.getColor());
		System.out.println(r2.getColor());
		System.out.println(r3.getColor());
		System.out.println(Rectangle.getColor());
		
		//main 안에서 static 없는 메서드 쓰는 방법
		//자기 자신을 가지고 인스턴스 생성 후에 그 인스턴스 가지고 불러오기
		//testMethod();
		StudyJava01_RectangleTest myself = new StudyJava01_RectangleTest();
		myself.testMethod();

	}

}
