#include<stdio.h>
#include<math.h>
int main()
{
	int t , n, i ,j ,flag ;
	scanf("%d",&t);
	long int a[1000000] ;
	a[0] = 0 ;
	for(i = 2;i <= 1000000;i++)
	{
		flag = 1 ;
		for(j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0) 
			{
				flag = 0 ; 
				break ;
			}
		}
        if(flag==1) a[i-1] = a[i-2] + i ;
		else a[i-1] = a[i-2] ;
	}
	while(t--)
	{
		fflush(stdin);
		scanf(" %d",&n);
		printf("%ld\n",a[n-1]);
	}
	return 0;
}