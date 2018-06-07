#include<stdio.h>
int main()
{
	int t ,n, a,b ,c,mult;
	scanf("%d",&t);
	while(t--)
	{
		scanf(" %d",&n);
		for(c=n-3,mult = -1;c>=n/3+1;c--)
		{
			for(a=1,b=n-c-a;a<b;a++)
			{
				b=n-c-a;
				if(n*n==2*(a*b+n*c))
					mult = a*b*c > mult ? a*b*c : mult ;
			}
		}
		printf("%d\n",mult);
	}
	return 0;
}