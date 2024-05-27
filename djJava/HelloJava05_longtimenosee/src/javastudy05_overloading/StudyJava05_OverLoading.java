package javastudy05_overloading;

public class StudyJava05_OverLoading {

	//오버로딩 : 메서드 이름이 똑같아도 매개변수가 다르면
	//서로 다른 메서드로 간주함
	//C 언어에서는 없는 개념이라서, 무조건 함수 이름을 바꿔야 했음
	//java, c#에서는 메서드 이름이 겹쳐도 괜찮다, 단 매개변수가 달라야 됨
	//타입이 다르든 개수가 다르든 해야 함
	//리턴 타입은 아무런 상관이 없음, 중요한 건 매개변수
	
	//오버로딩이 적용 되는 분야
	//1. 메서드
	//2. 생성자 = public Animal() {} 
	
	//0~9까지만 나오는 랜덤
	public static int getRandomNum() {
		return (int)(Math.random()*10);
	}
	//1~limit 값까지 나오는 랜덤
	public static int getRandomNum(int limit) {
		return (int)(Math.random()*limit)+1;
	}
	//start~limit값까지 나오는 랜덤
	public static int getRandomNum(int start, int limit) {
		return ((int)(Math.random()*(limit-start))+1)+start-1;
	}
	//문자열을 숫자로 바꾼 뒤 1~limit값까지 나오게 함
	public static int getRandomNum(String num) {
		try {
			int mynum = Integer.parseInt(num);
			return getRandomNum(mynum);
		} catch (Exception e) {
			System.out.println(num+" : 숫자가 아닙니다.");
			return 0;
		}
	}
	
	public static void main(String[] args) {
		
		//int a = 100;
		//String a = "500";
		// TODO Auto-generated method stub
		System.out.println(getRandomNum());
		System.out.println(getRandomNum(1000));
		System.out.println(getRandomNum(300,1000));
		System.out.println(getRandomNum("500"));//최댓값이 500인 랜덤
		System.out.println(getRandomNum("ㅁㅁㅁ"));//무조건 0
	}

}
