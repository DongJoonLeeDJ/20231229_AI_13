package studyjava03;

public class StudyJava05_Ant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String start = "1";
		for(int i = 0; i<20; i++) {
			System.out.println("start : " + start);
			int count = 0;
			char num = start.charAt(0);
			String end = "";
			for(int j = 0; j<start.length(); j++) {
				if(num==start.charAt(j))
					count++;
				else {		
					end = end+num+count;
					num = start.charAt(j);
					count = 1;
				}
			}
			end = end + num + count;
			start = end;
		}

	}

}
