import java.util.Scanner;
class Appless
{
	public static void main(String args[])
	{
	Scanner bucky = new Scanner(System.in);
	double snum , fnum , answer ; 
	System.out.println("Enter first number  : ");
	fnum = bucky.nextDouble();
 
	System.out.println("Enter Second number  : ");
	snum = bucky.nextDouble(); 
	
	answer = fnum + snum ; 
	
	System.out.println("Answer "+answer);
	}
}