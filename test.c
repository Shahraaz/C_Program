#include<stdio.h>

int main()
{
	int i ;
	for(i=1;i<=20;i++) printf("cube of %2d is %4d\n",i,i*i*i);
	printf("\n");
	for(i=1;i<=30;i++) printf("square of %2d is %3d\n",i,i*i);
	getc(stdin);
}

