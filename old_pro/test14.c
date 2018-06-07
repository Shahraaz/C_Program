#include<stdio.h>
int i = 10 ; 

void fun() ;  
int main(){
int i = 15 ; 
printf("%d ",i);

fun(); 

printf("%d ",i);}

void fun(){
i = 5 ; 
printf("%d ",i);

}