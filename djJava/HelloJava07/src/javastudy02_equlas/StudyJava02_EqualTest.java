package javastudy02_equlas;

public class StudyJava02_EqualTest {
public static void main(String[] args) {
	Student s1 = new Student("한형빈", 35, "남");
	Student s2 = new Student("한형빈", 35, "남");
	
	//DTO 관점에서 보자면 모든 구성요소가 다 똑같아서 서로 다른 객체일 수 있음

	
	//VO 관점에서 보면 모든 구성요소가 다 똑같으면 서로 같은 객체
	System.out.println(s1.equals(s2));
	System.out.println(s2.equals(s1));
}
}
