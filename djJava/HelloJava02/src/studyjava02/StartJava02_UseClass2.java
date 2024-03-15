package studyjava02;

import java.util.Scanner;

public class StartJava02_UseClass2 {

	private static boolean isDuplicateName(Vehicle[] vs, String name) {
		
		for(Vehicle item : vs) {
			if(item.getName()==null) //이름을 아예 입력한 적이 없으면 그냥 다음 단계로 넘어감
				continue;
			
			if(item.getName().equals(name)) {
				return true;
			}
		}
		return false;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Vehicle v1 = new Vehicle();
		Vehicle v2 = new Vehicle("G80");
		Vehicle v3 = new Vehicle("아슬란",3300,"현대");
		
		Vehicle vs[] = new Vehicle[5];
		vs[0] = v1;
		vs[1] = v2;
		vs[2] = v3;
		vs[3] = new Vehicle();
		vs[4] = new Vehicle();
		Scanner s = new Scanner(System.in);
		for(int i = 0; i<vs.length; i++) {
			System.out.println("차 이름을 입력하세요.");
			String name = s.nextLine();
			if(isDuplicateName(vs,name)) {
				System.out.println("차 이름 중복!");
				i--;
				continue;
			}
			System.out.println("cc?");
			//String c = s.nextLine();
			//int cc = Integer.parseInt(c);
			int cc = Integer.parseInt(s.nextLine());
			System.out.println("차 회사명?");
			String company = s.nextLine();
			
			vs[i].setName(name);
			vs[i].setCc(cc);
			vs[i].setCompany(company);
			
		}
		
		for(Vehicle v : vs) {
			System.out.println(v.getName());
			System.out.println(v.getCc());
			System.out.println(v.getCompany());
		}
		
		

	}


}










