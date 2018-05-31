#include<stdio.h>
int main(){
long int n ;
long int num1= 1 , num2 = 1 , counter =0;
printf("enter the number f terms to be printed : ");
scanf("%ld",&n);
while(1){
if(++counter%3==0)printf("%ld ,",num1); n -- ;
if (n==0) break ;num1 += num2 ;
if(++counter%3==0)printf("%ld ,",num2); n -- ;
if (n==0) break ;num2 += num1 ;
}
}