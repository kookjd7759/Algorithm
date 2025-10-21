import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int arr[] = new int[b];
		for (int i = 0; i < b; ++i) arr[i] = sc.nextInt();
		for (int n : arr)
			if (Math.abs(a - n) < Math.abs(n - 1))
				System.out.print(a + " ");
			else
				System.out.print("1 ");
 	}
}
