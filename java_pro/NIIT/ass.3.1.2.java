import java.util.Scanner ; 
class ass312
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("Enter Basic Salary : ");
		double i = in.nextDouble();
		System.out.println("HRA is 2% : "+(i+.02*i));
		System.out.println("PF is 3% : "+(i+.03*i));
		System.out.println("TA is 1% : "+(i+.01*i));
		System.out.println("ESI is 2.5% : "+(i+.025*i));

	}
}