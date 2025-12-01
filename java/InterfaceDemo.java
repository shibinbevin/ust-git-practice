package basics;

interface Animal {
	void sound();
}

class Dog implements Animal{
	public void sound() {
		System.out.println("Woof!!!");
	}
}

class Cat implements Animal{
	public void sound() {
		System.out.println("Meow!!!");
	}
}

public class InterfaceDemo {
	public static void main(String[] args) {
		Dog dog = new Dog();
		Cat cat = new Cat();

		dog.sound();
		cat.sound();
	}

}
