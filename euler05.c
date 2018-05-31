#include<stdio.h>
int main()
{
	int n,t,m,i,a[]={1,2,3,2,5,1,7,2,3,1,11,1,13,1,1,2,17,1,19,1,1,1,23,1,5,1,3,1,29,1,31,2,1,1,1,1,37,1,39,1} ;
	scanf("%d",&t);
	while(t--)
	{
		fflush(stdin);
		scanf(" %d",&n);
		for(i=0,m=1;i<n;i++)
			m*=a[i];
		printf("%d\n",m);
		}
}