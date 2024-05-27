package javastudy01_static;

public class Rectangle {
	
	//변수, 메서드 : 클래스 변수 / 인스턴스 변수 그리고
	//클래스 메서드 / 인스턴스 메서드
	
	//인스턴스 변수, 인스턴스 메서드 : 인스턴스가 만들어 져야만 쓸 수 있고
	//인스턴스 마다 값이 다를 수 있음
	//인스턴스 : new + 생성자()
	//ex. Rectangle r = new Rectangle
	//예시
	//사각형의 width 값, height값
	//사각형의 넓이 구하기 (사각형 별로 width height가 다르므로 넓이도 다름)
	private int width;
	private int height;
	
	public Rectangle(int width, int height) {
		this.width = width;
		this.height = height;
	}
	
	//인스턴스 메서드(=static 없는 메서드) 안에는 static 붙은 변수나 메서드 추가 가능
	public int getArea() {
		System.out.println("색상 : " + color);
		if(width<0) {
			System.out.println("width 음수는 안 됩니다.");
			width *= -1;
		}
		if(height<0) {
			System.out.println("height 음수는 안 됩니다.");
			height *= -1;
		}
		return width*height;
	}
	
	//클래스 변수 : 공통된 값
	//클래스이름.변수 나 메서드
	//ex. Rectangle.color, Rectangle.getArea(10,5)
	//예시 : 사각형 색깔이 모두 똑같다고 가정할 때 color는 공통 값이 될 수 있다.
	private static String color;
	
	//클래스 메서드
	//클래스 메서드(static) 안에는 static이 붙은 변수만 들어갈 수 있다.
	public static String getColor() {
		//width = 0; //Cannot make a static reference to the non-static field width
		//getArea();
		return color;
	}
	public static void setColor(String color) {
		Rectangle.color = color;
	}
	//사각형이 어떻든지 간에 넓이 구하는 공식은 똑같으니까 공통된 메서드로 묶을 수 있다.
	public static int getArea(int width, int height) {
		return width*height;
	}
	
	
	

}









