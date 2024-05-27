package javastudy01_class;
//class = C의 구조체와 유사함
//C의 구조체와 다르게 메서드를 포함할 수 있음
//C의 구조체와 마찬가지로 사용자 정의 자료형이다.
//하나의 변수에 하나 이상의 값을 갖게 할 수 있음
//동물 변수 => 이름값 뿐 아니라 나이 값 등도 가질 수 있음

//접근 제한자 : (default), public, protected, private

// default : 접근 제한자를 적지 않는 경우
//같은 패키지(=같은 폴더)에서는 public이랑 동일하게 동작함
//다른 패키지(=다른 폴더)에서 불러올 수 없음

//public(공공의): 패키지가 다르든 말든 다 불러올 수 있음

//private(개인적인) : 해당 클래스 안에서만 사용이 가능하고
//다른 클래스에서는 아예 접근이 불가능
//접근 : 값을 읽거나 혹은 값을 바꾸는 걸 의미함

public class Animal {
	private String name;
	public int age;
	String number; //접근제한자가 없는 경우 = default
	
	//Getter, Setter
	public void setName(String name) {
			this.name= name;
	}
	public String getName() {
		return this.name;
	}
	
	/*
	    public Animal() { } //내가 따로 적지 않아도 이런 비어 있는 생성자가 있음
	*/
	
}








