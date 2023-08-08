import java.util.Scanner;
import java.math.BigDecimal;

public class Main {
	static int a, b, c;
	static BigDecimal A, B, C;
	public static final int Deapth = 50;
	public static final int Point = 60;
	public static final BigDecimal PI = new BigDecimal("3."
			+ "14159265358979323846264338327950288419716939937510"
			+ "58209749445923078164062862089986280348253421170679"
			+ "82148086513282306647093844609550582231725359408128"
			+ "48111745028410270193852110555964462294895493038196"
			+ "44288109756659334461284756482337867831652712019091");
	
	public static BigDecimal MYfactorial(int num, BigDecimal Prev_fac) {
		BigDecimal Num = Prev_fac;
		
		for (int i = num - 1; i <= num; i++) 
			Num = Num.multiply(new BigDecimal(i));
		
		return Num;
	}
	
	public static BigDecimal MYpow(BigDecimal radian, int size, BigDecimal Prev_pow) {
		BigDecimal Num = Prev_pow;
		for (int i = size - 1; i <= size; i++)
			Num = Num.multiply(radian);
		
		return Num;
	}
	
	public static BigDecimal MYsin(BigDecimal radian) {
		radian = radian.remainder(PI.multiply(new BigDecimal("2")));
		BigDecimal sum = radian;
		BigDecimal pow = radian;
    	BigDecimal fac = BigDecimal.ONE;
	    for (int i = 1; i <= Deapth; i++) {
	    	pow = MYpow(radian, 2 * i + 1, pow);
	    	fac = MYfactorial(2 * i + 1, fac);
	        if (i % 2 == 0) 
	        	sum = sum.add(pow.divide(fac, Point, BigDecimal.ROUND_HALF_UP));
	        else 
	        	sum = sum.subtract(pow.divide(fac, Point, BigDecimal.ROUND_HALF_UP));
	    }
	    
	    return sum;
	}
	
	public static BigDecimal Function() {
		BigDecimal TWO = new BigDecimal("2.0");
		BigDecimal Left = C.divide(A, Point, BigDecimal.ROUND_HALF_UP).subtract(BigDecimal.ONE);
		BigDecimal Right = C.divide(A, Point, BigDecimal.ROUND_HALF_UP).add(BigDecimal.ONE);
		BigDecimal Mid = BigDecimal.ZERO, Num;
		
		while (Right.subtract(Left).abs().compareTo(new BigDecimal("1e-21")) == 1) {
			Mid = Left.add(Right).divide(TWO, Point, BigDecimal.ROUND_HALF_UP);
	    	Num = Mid.multiply(A).add(B.multiply(MYsin(Mid))).subtract(C);
	    	
	    	// System.out.println("Left : " + Left);
	    	// System.out.println(" ==== Mid : " + Mid);
	    	// System.out.println("Right : " + Right);
	    	// System.out.println("Num : " + Num + "\n");
	    	
	    	if (Num.compareTo(BigDecimal.ZERO) > 0) 
	    		Right = Mid;
	    	else
	    		Left = Mid;
		}
		
	    return Mid;
	}
	
	public static void main(String args[]) {
		// System.out.println(Result_.setScale(3, BigDecimal.ROUND_HALF_DOWN));
		// System.out.println(Result_.setScale(3, BigDecimal.ROUND_HALF_EVEN));
		// System.out.println(Result_.setScale(3, BigDecimal.ROUND_HALF_UP)); -> Now Version
		
		Scanner scanner = new Scanner(System.in);
		a = scanner.nextInt(); A = new BigDecimal(a);
		b = scanner.nextInt(); B = new BigDecimal(b);
		c = scanner.nextInt(); C = new BigDecimal(c);
		
		BigDecimal Result = Function();
		
		// System.out.println(Result.setScale(30, BigDecimal.ROUND_HALF_UP));
		System.out.println(Result.setScale(6, BigDecimal.ROUND_HALF_UP));
		
		scanner.close();
	}
}
