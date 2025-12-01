package basics.collections;

import java.util.ArrayList;
import java.util.List;

public class ListDemo {
	public static void main(String[] args) {
		List<Integer> numbers = new ArrayList<Integer>();
		
		numbers.add(6);
		numbers.add(10);
		numbers.add(23);
		numbers.add(7);
		numbers.add(2);
		
		System.out.println(numbers);
		
		numbers.sort((number1, number2) -> (number2 - number1));
		
		System.out.println(numbers);
		
	}
}
