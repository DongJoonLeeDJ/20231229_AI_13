package javastudy05_overloading;

public class StudyJava06_Manager {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Person pp = new Person(); //매개변수 없는 생성자는 쓸 수가 없게 됨
		Person p = new Person("한형빈"); //지금 이 클래스는 무조건 문자열 하나의 정보는 있어야 함
		Person p2 = new Person("이동준",35);
	}

}
