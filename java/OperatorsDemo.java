package basics;

public class OperatorsDemo {
	public static void main(String[] args) {
		int a = 3, b = 10;
		System.out.println("a + b = " + (a + b));
		System.out.println("a - b = " + (a - b));
		
		System.out.println("a > b = " + (a > b));
		
		boolean x = true, y = false;
		
		System.out.println("x && y = " + (x && y));
		
		a += 5;
		System.out.println("a+=5 = "+ a);
		
		int max = (a > b) ? a : b;
		System.out.println("Maximin= " + max);
	}
}