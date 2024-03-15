package studyjava02;

import java.util.Scanner;

import studyjava01.*; //다른 패키지에 있는 클래스를 쓰겠다는 의미

public class StartJava01_myzoo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//참고로 이런 것도 가능함
		//StartJava01_zoo의 main에 있는 내용들 다 실행함
		//StartJava01_zoo.main(args); 
		//main은 static 메서드(=클래스 메서드)이므로 
		
		Animal[] zoo = new Animal[10];
		Scanner s = new Scanner(System.in);
		for(int i = 0; i<zoo.length; i++) {
			System.out.println("무슨 동물 추가 할까?");
			String animal = s.nextLine();
			System.out.println("그 동물 이름은 뭔데?");
			String name = s.nextLine();
			System.out.println("그 동물 나이는?");
			String myage = s.nextLine();
			int age = Integer.parseInt(myage);
			switch(animal) {
			case "개":
				zoo[i] = new Dog();
				System.out.println("털 색깔은?");
				String hairColor = s.nextLine();
				((Dog)zoo[i]).setHairColor(hairColor);
				break;
			case "고양이":
				zoo[i] = new Cat();
				System.out.println("눈 색깔은?");
				String eyeColor = s.nextLine();
				((Cat)zoo[i]).setEyeColor(eyeColor);
				break;
			case "말":
				zoo[i] = new Horse();
				break;
			case "소":
				zoo[i] = new Cow();
				System.out.println("몇 kg인가?");
				String mykg = s.nextLine();
				double kg = Double.parseDouble(mykg);
				((Cow)zoo[i]).setKg(kg);
				break;
			default:
				zoo[i] = new Animal();
				break;
			}
			zoo[i].setName(name);
			zoo[i].setAge(age);
		}
		
		//foreach 적고 ctrl space
		for (Animal animal : zoo) {
			animal.eat();
			animal.sleep();
			if(animal instanceof Dog)
				((Dog)animal).bark();
			if(animal instanceof Cat)
				((Cat)animal).meow();
			if(animal instanceof Cow)
				((Cow)animal).makeMilk();
		}
		

	}

}














