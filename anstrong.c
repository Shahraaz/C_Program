#include<stdio.h>
#include<math.h>
void main()
{
	int n , t ,checker ;
	printf("enter a number ");
	scanf("%d",&n);
	for(t=0,checker = n ;n;)
	{
		t += (n%10)*(n%10)*(n%10);
		 n /= 10 ;
	}
	if(checker==t) printf("yes");
	else printf("no");
}