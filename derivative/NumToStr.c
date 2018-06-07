#include<stdio.h>
#include<string.h>
int main()
{
	long n ;
	scanf("%ld",&n);
	char str[50];
	int i ;
	for(i = 0;n;i++)
	{
		str[i] = n%10+48 ;
		n = n / 10 ;
	}
	str[i]='\0';
	strrev(str);
	printf("%s",str);
}