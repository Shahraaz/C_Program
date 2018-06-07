#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int num=0, i ;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
		num = num *10 +(str[i]-48);
	printf("%d",num);
}