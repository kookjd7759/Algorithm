import java.util.Scanner;

class Main {
   public static void main(String[] args) {
	   //n = 10 x= 5
	   Scanner input = new Scanner(System.in);
	   int n = input.nextInt();
	   int x = input.nextInt();
	   
	   
	   for(int k = 0; k < n; k++) {
		  int num = input.nextInt();
		  
		  if(num < x) 
			   System.out.print(num + " ");
	   }
   }
} 