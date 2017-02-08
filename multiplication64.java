import java.math.BigInteger;
import java.util.Scanner;
public class multiplication64
{
	public static void main(String args[]) throws Exception
{	
	BigInteger A =  new BigInteger("3141592653589793238462643383279502884197169399375105820974944592");
	BigInteger B =  new BigInteger("2718281828459045235360287471352662497757247093699959574966967627");
	BigInteger C = A.multiply(B);
	System.out.print(C);
}
}