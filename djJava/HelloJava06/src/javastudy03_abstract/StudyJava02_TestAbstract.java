package javastudy03_abstract;

import java.util.ArrayList;

import javastudy02_abstract.Animal;
import javastudy02_abstract.Cat;

public class StudyJava02_TestAbstract {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
//		Animal a = new Animal(); //Cannot instantiate the type Animal
		
		//다형성 적용
		Animal dog = new Dog();
		Animal cat = new Cat();
		cat.setAge(0);
		cat.setName("춘식이");
		Animal[] zoo = new Animal[3]; //처음에 크기 정해줘야 함
		zoo[0] = dog;
		zoo[1] = cat;
		zoo[2] = new Cat();
		zoo[2].setAge(5);
		zoo[2].setName("콩이");
		
		ArrayList<Animal> animals = new ArrayList<Animal>(); //크기를 정하지 않음
		animals.add(dog);
		animals.add(cat);
		animals.add(zoo[2]);
		
		Animal.color = "black"; //Animal의 color를 후손 클래스도 다 공유함
		System.out.println(Dog.color);
		System.out.println(Cat.color);
		System.out.println(new Dog().color);
		System.out.println(new Cat().color);
		
		//a는 zoo나 animals에 있는 각각의 값들을 의미
		for(Animal a : zoo) {
			a.born(); //태어나는 건 다 똑같음
			a.eat();//먹고 자는 건 동물마다 다름
			a.sleep();
			if(a instanceof Cat)
				((Cat)a).jump(3);
			if(a instanceof Dog)
				((Dog)a).bark();
		}
		for(Animal a : animals) {			
			a.born(); //태어나는 건 다 똑같음
			a.eat();//먹고 자는 건 동물마다 다름
			a.sleep();
			if(a instanceof Cat)
				((Cat)a).jump(3);
			if(a instanceof Dog)
				((Dog)a).bark();
		}
		
		

	}

}







