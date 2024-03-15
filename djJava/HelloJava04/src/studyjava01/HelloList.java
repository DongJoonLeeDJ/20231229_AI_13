package studyjava01;

import java.util.ArrayList;

public class HelloList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> nums = new ArrayList<Integer>();
		ArrayList<String> names = new ArrayList<String>();
		ArrayList<Student> students = new ArrayList<Student>();
		
		nums.add(10);
		nums.add(20);
		nums.add(30);
		System.out.println(nums.set(0, 1000));//0번째 원래값 리턴, 0번째 값 변경
		System.out.println(nums.get(0));
		nums.remove(1); //1번째(=두번째)에 있는 20을 삭제한 것
		for(int item : nums)
			System.out.println(item);
		
		names.add("이동준");
		names.add("이유나");
		names.add("박귀현");
		System.out.println(names.set(2, "김규평"));
		names.remove(0);
		for(String item : names)
			System.out.println(item);
		
		students.add(new Student("박지선","001",25));
		students.add(new Student("박지선","002",15));
		students.add(new Student("이지환","003",35));
		students.set(0, new Student("이동준","038",36));
		students.remove(2);
		System.out.println(students.get(0));
		for(Student item : students)
			System.out.println(item);
		
		
		

	}

}
