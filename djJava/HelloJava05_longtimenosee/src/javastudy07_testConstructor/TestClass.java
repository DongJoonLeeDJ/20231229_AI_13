package javastudy07_testConstructor;

import javastudy05_overloading.Volunteer;

public class TestClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Volunteer v1 = new Volunteer(); //아무 정보 없는 봉사자
		Volunteer v2 = new Volunteer(35); //이름 모를 35세의 봉사자
		Volunteer v3 = new Volunteer("세르게이"); //이름만 파악된 봉사자
		Volunteer v4 = new Volunteer(35,"남성");//나이와 성별만 파악됨
		Volunteer v5 = new Volunteer("세르게이", "남성");//이름과 성별만 파악됨
		Volunteer v6 = new Volunteer("세르게이", 35, "남성");
		Volunteer v7 = new Volunteer("세르게이", 35);
	}

}
