#include<stdio.h>
#include<math.h>
int a[10000];
void arraycreater()
{	int i , j , flag , counter ;
	for(i= 2,counter = 0;;i++)
	{
		flag = 1 ;
		for(j=(long int)sqrt(i);j>=2;j--)
		{
			if(i%j==0) 
			{
				flag = 0 ; 
				break;
			}
		}
		if(flag==1)
		{	
			a[counter]=i;
			++counter;
		} 
		if(counter==10000) break ;
	}
}
int main()
{
	int t , n ;
	scanf("%d",&t);
	arraycreater();
	while(t--)
	{
		fflush(stdin);
		scanf(" %d",&n);
		printf("%d\n",a[n-1]);
	}
	return 0;
}