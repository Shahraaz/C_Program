#include<stdio.h>
int main()
{
	int t ,n,a,b ,c,mult,arr[3000];
	scanf("%d",&t);
	for(n = 1 ; n<=3000 ; n++ )
	{	
		for(c=n-3,mult = -1;c>=n/3+1;c--)
		{
			for(a=1,b=n-c-a;a<b;a++)
			{
				b=n-c-a;
				if(n*n==2*(a*b+n*c))
					mult = a*b*c > mult ? a*b*c : mult ;
			}
		}
		arr[n-1] = mult ;
	}
	while(t--)
	{
		scanf(" %d",&n);
		printf("%d\n",arr[n-1]);
	}
	return 0;
}