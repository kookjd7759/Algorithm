import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner scanner = new Scanner(System.in);
    	int size = scanner.nextInt();
    	int[] arr = new int[1000000];
    	
    	int min = 1000000;
    	int max = -1000000;
    	for (int i = 0; i < size; i++) {
    		arr[i] = scanner.nextInt();
    	}

    	for (int i = 0; i < size; i++) {
    		if (min > arr[i])
    			min = arr[i];

    		if (max < arr[i])
    			max = arr[i];
    	}
    	
    	System.out.print(min + " " + max);
    }
}