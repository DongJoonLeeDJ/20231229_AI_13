package javastudy01_compare;

public class StudyJava01_CompareTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Student s1 = new Student("한형빈", 35, "남");
		Student s2 = new Student("한형빈", 35, "남");
		
		//DTO 관점에서 보자면 모든 구성요소가 다 똑같아서 서로 다른 객체일 수 있음
		System.out.println(s1.equals(s2));
		System.out.println(s2.equals(s1));
		
		//VO 관점에서 보면 모든 구성요소가 다 똑같으면 서로 같은 객체

	}

}












