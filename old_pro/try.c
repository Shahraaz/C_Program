#include<stdio.h>

int fact(int n);

int main(){

int i , result ;
printf("enter a number:");
scanf(" %d",&i);
result =  fact(i) ;
printf("factorial of number %d is %d",i,result);
 
return 0 ;
}

int fact(int n){

if(n==0) return 1 ;
else return n * fact(n-1) ;

}