package studyjava01;

//기본적으로 말티즈는 자기 먹기 짖기 됨
//이름 나이 털색깔 속성이 있음
public class Maltese extends Dog{

	public Maltese() {
		setHairColor("white"); //말티즈는 처음에 흰 색
	}
	
	public void charming() {
		System.out.println(getHairColor()+"털을 흩날리며...");
		System.out.println("애교부리기~~~");
	}
	
}
