package studyjava01;

import java.util.Scanner;

public class StartJava02_Solve3 {

	public static void main(String[] args) {
		System.out.println("암호문 입력");
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		char[] test = new char[] 
				{'ㄱ', 'ㄴ', 'ㄷ','ㄹ','ㅁ','ㅂ','ㅅ','ㅇ','ㅈ','ㅊ','ㅋ','ㅌ','ㅍ','ㅎ',
				 'ㅏ','ㅑ','ㅓ','ㅕ','ㅗ','ㅛ','ㅜ','ㅠ','ㅡ','ㅣ'};
		String output = "";
		for(int i = 0; i<input.length(); i++) {
			System.out.print
			(test[input.charAt(i)-'a']);
		}
		

	}

}
