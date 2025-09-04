import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, d;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		d = sc.nextInt();
		
		int ac = a + c;
		int bd = b + d;
		
		if (ac == bd) System.out.print("Either");
		else System.out.print(ac < bd ? "Hanyang Univ." : "Yongdap");
	}
}
