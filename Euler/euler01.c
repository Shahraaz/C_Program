#include<stdio.h>
long add(int n , int d)
{
	int c = n/d -( n%d==0)  ;
	return (long)d * c*(c+1)/2 ;		
}
int main()
{
	int t , n , i,c;
	long int sum;
	scanf("%d",&t);
	while(t--)
	{
		fflush(stdin);
		scanf("%d",&n);
		sum = 0;
		sum+=add(n,3);
		sum+=add(n,5);
		sum-=add(n,15);
		printf("%ld\n",sum);
	}
}