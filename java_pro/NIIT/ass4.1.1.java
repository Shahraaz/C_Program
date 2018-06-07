class ass411
{
	public static void main(String[] args)
	{
		double d1= 10 , d2 = 20 , d3 = 360 ,d4 = 50 ;
		System.out.printf("Avg = %f\n",average(d1,d2));
		System.out.printf("Avg = %f\n",average(d1,d2,d3));
		System.out.printf("Avg = %f\n",average(d1,d2,d3,d4));
	}
	static double average(double... numbers)
	{
		double total = 0 , average;
		for(double x : numbers)
			total += x ;
		average = total/numbers.length ;
		return average ;
	}
}
