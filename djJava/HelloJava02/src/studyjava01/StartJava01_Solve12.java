package studyjava01;

import java.util.Arrays;
import java.util.Scanner;

public class StartJava01_Solve12 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] alphabetcount = new int[26];//26칸짜리 배열은 모두 0으로 초기화 됨
		Scanner s = new Scanner(System.in);
		System.out.println("문자열 입력하세요.");
		String input = s.nextLine();
		input = input.toLowerCase(); //모두 소문자로 변경
		for(int i = 0; i<input.length(); i++) {
			alphabetcount[ input.charAt(i)- 'a' ]++;
		}
		for(int i = 0; i<26; i++) {
			if(alphabetcount[i]!=0) {
				//c#의 string.format과 비슷한 게 있음
				String result = String.format
						("'%c'는 %d개", i+'a',alphabetcount[i]);
				System.out.println(result);
			}
		}
		
		int[] firstAlpha = new int[26];
		Arrays.fill(firstAlpha, -1);//firstAlpha에 있는 걸 모두 -1로 채움
		for(int i = 0; i<input.length();i++) {
			if(firstAlpha[input.charAt(i)-'a'] == -1)
				firstAlpha[input.charAt(i)-'a'] = i;
		}
		for(int i = 0; i<26; i++) {
			if(firstAlpha[i]!=-1) {
				String sentense = "'"+((char)(i+'a'))+"'"
			                         +"의 처음 위치:"+ (firstAlpha[i]+1);
				System.out.println(sentense);
			}
		}
		

	}

}












