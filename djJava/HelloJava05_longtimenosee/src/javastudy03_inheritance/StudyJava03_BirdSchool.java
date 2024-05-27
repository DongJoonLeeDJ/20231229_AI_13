package javastudy03_inheritance;

public class StudyJava03_BirdSchool {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bird b = new Bird();
		b.Fly(); //같은 패키지이므로 protected든 default든 다 됨
		//단 private은 안 됨

	}

}
