#include<stdio.h>
#include<math.h>
int main()
{
	long int n ,i,j,flag,counter=0; 
	scanf("%ld",&n);
	for(i= n;i>=2;i--)
	{
		flag = 1 ;
		for(j=(long int)sqrt(i);j>=2;j--)
		{
			if(i%j==0) 
			{
				flag = 0 ; 
				break;
			}
		}
		if(flag==1) printf("%3ld : %ld\n",++counter,i);
		
	}
}







