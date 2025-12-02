package javaPractice;

public class HelloWorld {
	static int add(int a, int b) {
		return a+b;
	}
	static int divide(int a, int b) {
		return a/b;
	}
	public static void main(String[] args) {
		System.out.println("Hello world");
		int x = 5, y = 0;
		int result, result1 = 0;
		result = add(x, y);
		try {
			result1 = divide(x, y);
		}
		catch (Exception e) {
			System.out.println("Unexpected error" + e);
		}
		System.out.println(result);
		System.out.println(result1);
	}

}
