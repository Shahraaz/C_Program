#include<stdio.h>
int *fun() ; 
int main()
{
int *j ;
j = fun() ;
printf("%d",*j);
}

int* fun(){
static int k ;
return &k ;
}

 