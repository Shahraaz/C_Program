#include<stdio.h>

int main()
{
int x = 10 ;
int *y = &x ; 
int q = &x ; 

printf("%d %d %d %d ",y ,q,*y ,&q );

y++ ;
q++;

printf("%d %d %d %d",y ,q,*y ,&q );

return 0 ;

}