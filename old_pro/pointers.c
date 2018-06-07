#include<stdio.h>
int main()
{
int x = 10 ; 
int *z = &x;
printf("%d %d %d\n\n",x , &x  , *(&x));

//printf("%d %d %d\n\n",y , &y  , *(&y));

printf("%d %d %d %d\n\n",z , &z , *z , *(&z));

int y = &x;
printf("%d",y);


}