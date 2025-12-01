package basics;
import java.util.Arrays;
import java.util.Collections;
//import java.util.Collections;

public class ArrayDemo {
	public static void main(String[] args) {

		Integer [] numbers = {4, 5, 2, 1 ,3};
		String [] names = {"Geek1", "Geek2", "Geek3"};
		
		Arrays.sort(numbers, Collections.reverseOrder());
		
		System.out.println("First number: " + numbers[0]);
		System.out.println("Second name " + names[1]);
		System.out.println("Sorted array: " + Arrays.toString(numbers));
	}

}

