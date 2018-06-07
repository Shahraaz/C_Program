#include<stdio.h>
int main()
{
	char c[50];
	int i , b,j,t ;
	gets(c);
	for(i=0;c[i]!='\0';)
	{
		if(c[i]==' ')
		{
			i++;
			continue ;
		}
		for(b=1;c[b+i]!=' ';b++);
		for(j=0;j<=(b-i)/2;j++)
		{	
			c[i+j]= t;
			c[i+j]=c[b-j];
			c[b-j]= t ;
		}
		i = b ;
	}
	puts(c);
}