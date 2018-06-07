#include<stdio.h>
void main()
{
	int n ,sum = 0,i;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++)
	{
		scanf(" %d ",&c[i]);
		sum += c[i];
	}
	sum == n*(n+1)/2 ? printf("YES") : printf("NO") ;
}