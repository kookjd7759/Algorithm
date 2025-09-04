import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(); n *= 3;
		int m = sc.nextInt();
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		if (n <= m) System.out.print(0);
		else System.out.print((n - m) * a + b);
	}
}
