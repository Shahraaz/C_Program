#include<stdio.h>
int main()
{
	int k ,i,j,l ,t,num, mult,maxmult;
	scanf("%d",&t);
	char n[100][1000];
	for(i=0;i<t;i++)
	{
		fflush(stdin);
		scanf(" %d %d",&num, &k);
		scanf(" %s",&n[i][0]);
		for(l=0,maxmult=0;l<=num-k;l++)
		{	for(j=0,mult = 1;j<k;j++)
			mult *= (n[i][j+l]-48);
			maxmult = maxmult>mult? maxmult : mult ;
		}
		printf("%d\n",maxmult);
	}
	return 0;
}