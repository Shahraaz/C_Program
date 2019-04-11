#include<stdio.h>
#include<math.h>
int main()
{
	int t ,n,n2,i,j,counter;
	
	for(n=1;n<=1000;n++)
	{
		for(i=1;;i++)
		{
			n2= i*(i+1)/2;
			for(j=1,counter=0;j<=sqrt(n2);j++)
				if(n2%j==0)
				{
					if(n2/j==j) counter ++;
					else counter += 2 ; 
				}
				
			if(counter>n)
			{
				printf("%10d,",n,n2);
				break;
			}
		}
	}
	return 0 ;
}