import java.util.Scanner;
class ass1
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		String name = in.nextLine();
		int marks[] = new int[6] ;
		int id, i, total=0, avg ;
		id = in.nextInt();		
		for(i = 0 ; i<6 ; i++)
		{
			marks[i] = in.nextInt();
			total += marks[i];
		}
		avg = total/6 ;
		System.out.println("Student id :"+id+"\n"+"Name :"+name+"\n"+"Total marks :"+total+"\nAverage marks :"+avg);
	}
}
