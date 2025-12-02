package javaPractice;

public class ArrayOddNumbers {
	public static void main(String[] args) {
		int [] numbers = {1, 33, 23, 12, 3, 15};
		int [] odd = new int[6];
		for(int i =0; i <= 5; i++) {
			if(numbers[i] % 2 != 0) {
				odd[i] = numbers[i];
			}
		}
		for(int i =0; i < 5; i++) {
			System.out.println(odd[i]);
		}
	}
}
