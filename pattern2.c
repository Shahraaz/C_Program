#include<stdio.h>
void main()
{	int n , i  , i2 ;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{	for(i2=0;i2<n-i;i2++)
			printf(" ");
		printf("*");
		for(i2=0;i2<2*i-3;i2++)
			printf(" ");
		(i==1)? printf("\n") : printf("*\n");		
	}
	for(i2=0;i2<n;i2++) 
			printf("* ");
}