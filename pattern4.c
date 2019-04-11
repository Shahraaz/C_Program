#include<stdio.h>
void main()
{	int n , i , t , i2 , t2 ;
char a ;
	printf("Enter a charecter\n");
	scanf("%c",&a);
	n = a - 96 ;
	for(i=0;i<n;i++)
	{	t =(i<n)? i + 1 : 2*n-1-i;
		for(i2 = 0 ;i2 <n-t;i2++)
			printf(" ");
		for(i2=1;i2<=2*t-1;i2++)
		{	t2 =(i2<=t) ?i2 : 2*t - i2 ;
			printf("%c",t2+96);
		}
		printf("\n");
	}
}