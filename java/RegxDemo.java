package basics;
import java.util.regex.Pattern;

public class RegxDemo {
	public static void main(String[] args) {
		System.out.println(Pattern.matches("hello.*", "hello world"));
		System.out.println(Pattern.matches("hello[0-9]+", "hello123 world"));
		
		System.out.println(Pattern.matches("[b-z]?", "a"));
		System.out.println(Pattern.matches("[a-zA-Z]+", "GfgTest"));
		System.out.println(Pattern.matches("[^a-z]?", "g")); 
		System.out.println(Pattern.matches("[geks]*", "geeksgeeks"));
	}
}
