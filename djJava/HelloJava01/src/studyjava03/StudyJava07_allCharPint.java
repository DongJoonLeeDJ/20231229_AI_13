package studyjava03;

public class StudyJava07_allCharPint {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char[] ganada = {
				'가','나','다','라','마','바','사','자','차','카','타','파','하'
		};
		for(char i : ganada)
			System.out.println(i);
		
		//렉걸려서 생략
		//for(char i='가'; i<='힣'; i++)
		//	System.out.print(i);
		
		for(char i = 'A'; i<='z'; i++)
		{
			if(i>'Z' && i<'a')
				continue;
			System.out.print(i);
		}

	}

}
