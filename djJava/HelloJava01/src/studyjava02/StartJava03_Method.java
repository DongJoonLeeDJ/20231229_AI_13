package studyjava02;

public class StartJava03_Method {
	static void introduce(String name, int age, String gender)
	{
		System.out.println("학생 정보");
		System.out.println("이름 : " + name );
		System.out.println("나이 : " + age );
		System.out.println("성별 : " + gender );
	}
	//재귀함수도 사용할 수 있음(C#이나 C때처럼 쓰면 됨)
	//C#과 마찬가지로 static이 붙어있는 main에서 바로 함수 호출하고 싶으면
	//그 함수 앞에도 static 붙여야 하고... static 없는 함수를 굳이 쓰고 싶다면
	//방법이 따로 있긴 함...
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		introduce("한형빈",35,"남성");
		introduce("박지선",20,"여성");
	}

}
