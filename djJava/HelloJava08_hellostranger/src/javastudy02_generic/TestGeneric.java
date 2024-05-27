package javastudy02_generic;

import java.util.ArrayList;

public class TestGeneric {

	public static void main(String[] args) {
		Student<String> s1 = new Student<String>(); //학번을 문자열로 표기해야 함
		Student<Integer> s2 = new Student<Integer>();//학번을 정수로 표기해야 함
		
		s1.setName("이동준");
		s2.setName("한형빈");
		s1.setAge(34);
		s2.setAge(35);
		
		s1.setHakbeon("09");
		s2.setHakbeon(8);
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		list.add(100);
		ArrayList<String> list2 = new ArrayList<String>();
		list2.add("100");
	}
	
}


















