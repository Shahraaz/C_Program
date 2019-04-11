#include<stdio.h>
int main()
{

int s[4][2]={1234,56,1212,33,4153,5,6541,65};
extern int i , j ,*pint ; 
for (i = 0 ; i <= 3 ; i++)
	{
	int  *p = s[i];
	pint = (int*)p ; printf("\n");
	for(j = 0 ; j <= 1 ; j++ ) printf("%d",*(pint+j));
	}
}