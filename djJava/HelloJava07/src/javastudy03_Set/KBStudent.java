package javastudy03_Set;

public class KBStudent {
	private String name;
	private int age;
	private String gender;
	private int hakbeon;
	public KBStudent(String name, int age, String gender, int hakbeon) {
		this.name = name;
		this.age = age;
		this.gender = gender;
		this.hakbeon = hakbeon;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "이름:"+name+",학번:"+hakbeon+",나이:"+age+",성별:"+gender;
	}
	public int getHakbeon() {
		return hakbeon;
	}
	public void setHakbeon(int hakbeon) {
		this.hakbeon = hakbeon;
	}
	@Override
	public boolean equals(Object obj) {
		KBStudent kb = (KBStudent)obj;
		return this.hakbeon==kb.getHakbeon();
	}
	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return hakbeon; //학번을 해쉬코드로 바꿔버림
	}
	
}
