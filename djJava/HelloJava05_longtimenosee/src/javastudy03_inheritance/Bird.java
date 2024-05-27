package javastudy03_inheritance;

//새
public class Bird {
	
	private String color;
	private double height;
	private String name;
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public double getHeight() {
		return height;
	}
	public void setHeight(double height) {
		this.height = height;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	//protected
	//1. 해당 클래스를 상속받았거나 해당 클래스 자신만 쓸 수 있음
	//2. 같은 패키지에 있을 경우엔 default처럼 그냥 쓸 수 있음
	protected void Fly() {
		System.out.println("푸드덕 푸드덕 날아가요");
	}
	
	

}
