#include<stdio.h>

int main(){


long int n ;
long int num1= 1 , num2 = 1 , counter =0;
printf("enter the number f terms to be printed : ");
scanf("%ld",&n);

while(1){
printf("%3ld %ld\n",++counter,num1); n -- ;
if (n==0) break ;num1 += num2 ;
printf("%3ld %ld\n",++counter,num2); n -- ;
if (n==0) break ;num2 += num1 ;
}
}