package javastudy05_map;

import java.util.*;

public class StudyJava04_HashMap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//키 - 값으로 된 자료형
		//js의 객체같은 것
		//Student라는 클래스를 만들었다면...
		//뭔가 추가하고 싶은 게 있을 때마다 getter setter가 추가됨
		//HashMap을 주로 씀 = HashMap은 Map이라는 인터페이스를 구현한 클래스
		Map<String, String> Student = new HashMap<String, String>();
		HashMap<String, String> Person = new HashMap<String, String>();
		
		//키는 중복되지 않음
		Student.put("이름", "이동준");
		Student.put("학번", "2009038033");
		Student.put("전공", "컴퓨터공학");
		Student.put("이름", "한형빈"); //기존 이름인 이동준은 없어짐
		
		Person.put("성별", "남성");
		Person.put("ID", "hero430");
		
		System.out.println(Student.get("이름"));
		System.out.println(Student.get("학번"));
		System.out.println(Student.get("전공"));
		System.out.println(Person.get("성별"));
		System.out.println(Person.get("ID"));
		
		Student.put("연락처", "010-2940-1613");
		System.out.println(Student.get("연락처")); //Spring MVC(스프링 레거시)에서 많이 쓰임
		

	}

}










