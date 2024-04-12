import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int tc = 1; tc <= T; tc++){
          String num = in.next();
          int x = in.nextInt();
          long remainder = 0;
          for(int i = 0; i < num.length(); i++) {
               remainder = (remainder * 10 + (Character.getNumericValue(num.charAt(i)))) % x;
          }
          
          System.out.println("Case " + tc + ": " + remainder);
        }
    }
}