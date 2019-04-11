#include<stdio.h>
#include<conio.h>
int fab(int);

void main(){

int i , n ;
printf("Enter no. of elements to be generated\n");
scanf("&d",&n);

for (i = 1 ; i<n ; i++){
printf("%d",fab(i));
getch();
}

}

int fab(int n){
int fno;
if (n==1) return 1 ; 

else if (n==2) return 1 ;

else fno = fab(n-1) + fab(n-2);

return fno ;
}