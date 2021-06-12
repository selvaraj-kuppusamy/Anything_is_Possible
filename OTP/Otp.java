import java.util.*;
public class Otp
{
	static char[] OTP(int len)
	{
		System.out.println("Your OTP is: ");
		String numbers = "0123456789";
		Random rn = new Random();
		char[] otp = new char[len];
		for(int i=0;i<len;i++)
		{
		otp[i]=numbers.charAt(rn.nextInt(numbers.length()));
		}
		return otp;

	}
	public static void main(String[] args)
	{
		int length = 6;
		System.out.println(OTP(length));
	}
}
