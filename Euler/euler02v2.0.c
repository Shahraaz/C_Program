#include<stdio.h>
void main()
{
	long int n , t , i,sum ,a[]={2 ,8 ,34 ,144 ,610 ,2584 ,10946 ,46368 ,196418 ,832040 ,3524578 ,14930352 ,63245986 ,267914296 ,1134903170,3154826976 };
	scanf("%ld",&t);
	while(t--)
	{	fflush(stdin);scanf(" %ld",&n);
		for(sum = 0,i=0;a[i]<n;i++)
			sum+= a[i];
		printf("%ld\n",sum);
	}
}