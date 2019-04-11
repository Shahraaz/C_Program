#include<stdio.h>
int main()
{
	int t , n ;
	scanf("%d",&t);
	while(t--)
	{
		fflush(stdin);
		scanf(" %d",&n);
		printf("%ld\n",-(long)n*(n+1)*(2n+1)/6 + (long)n*n*(n+1)*(n+1)/4);
	}
	return 0;
}