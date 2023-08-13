import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner scanner = new Scanner(System.in);
    	int size = scanner.nextInt();
    	int[] arr = new int[100];
    	
    	for (int i = 0; i < size; i++) {
    		arr[i] = scanner.nextInt();
    	}
    	
    	int casenum = scanner.nextInt();
    	int count = 0;
    	
    	for (int i = 0; i < size; i++) {
    		if (arr[i] == casenum)
    			count++;
    	}
    	
    	System.out.print(count);
    }
}