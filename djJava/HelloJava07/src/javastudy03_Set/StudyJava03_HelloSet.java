package javastudy03_Set;

import java.util.HashSet;
import javastudy02_equlas.Student; //equals 구현되어 있음

public class StudyJava03_HelloSet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Set - 인터페이스
		//HashSet - Set을 구현한 대표적인 클래스
		//HashSet = 중복된 값이 절대로 들어가지 않음
		//ArrayList와 비스무리한 건 데, 중복된 값이 들어가지 않고 순서가 일정하지 않음
		
		HashSet<String> names = new HashSet<String>();
		names.add("이동준");
		names.add("이동준");
		names.add("한형빈");
		names.add("이동준");
		names.add("이동준");
		names.add("이순신");
		names.add("이순신");
		names.add("한형빈");
		
		for(String name : names)
			System.out.println(name);
		

		Student s1 = new Student("한형빈", 35, "남");
		Student s2 = new Student("한형빈", 35, "남");
		HashSet<Student> students = new HashSet<Student>();
		students.add(s1);
		students.add(s2); //equals 뿐 아니라 hashCode도 오버라이드 해야 중복체크 됨
		for(Student s : students)
			System.out.println(s.getName()+s.getAge()+s.getGender());
		
		
		HashSet<KBStudent> kbstudents = new HashSet<KBStudent>();
		KBStudent k1 = new KBStudent("한형빈", 35, "남성", 1);
		KBStudent k2 = new KBStudent("한형빈", 35, "남성", 2);
		KBStudent k3 = new KBStudent("추형욱", 30, "여성", 2);
		
		System.out.println(k1.equals(k2));
		System.out.println(k1.equals(k3));
		System.out.println(k2.equals(k3));
		
		kbstudents.add(k1);
		kbstudents.add(k2);
		kbstudents.add(k3);
		
		for(KBStudent k : kbstudents)
			System.out.println(k);
		
		
		
		
		

	}

}






