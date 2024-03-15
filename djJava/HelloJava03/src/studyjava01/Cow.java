package studyjava01;

public class Cow extends Animal {
	
	private double kg;
	public double getKg() {
		return kg;
	}
	public void setKg(double kg) {
		this.kg = kg;
	}
	public void makeMilk() {
		System.out.println(getName()+":우유 만드는 중");
		if(getAge() > 1)
			System.out.println(kg+"kg 무게의 소가 우유를 만듭니다.");
		else
			System.out.println(getAge()+"살은 아직 우유 못 만듦");
	}

}
