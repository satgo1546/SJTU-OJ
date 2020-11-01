import java.io.BufferedInputStream;
import java.util.Scanner;
 
// The class must be named Main.
// Non-ASCII characters are not allowed, not even in comments.
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		int a = in.nextInt();
		int b = in.nextInt();
		System.out.println(a + b);
	}
}
