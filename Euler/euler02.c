#include<stdio.h>
void main()
{
	long int n , t , i,fnum,snum,nxtnum,sum ;
	scanf("%ld",&t);
	while(t--)
	{	fflush(stdin);scanf(" %ld",&n);
		for(fnum = 0 , snum = 1, sum = 0;;i++)
		{	nxtnum = fnum + snum ;
			fnum = snum ;
			snum = nxtnum;
			if(nxtnum>n) break ;
			if (nxtnum%2==0) sum+= nxtnum ;
		}
		printf("%ld\n",sum);
	}
}