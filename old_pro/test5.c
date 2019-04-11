#include<stdio.h>

int main(){
	int t ;
	
	printf("enter number of test cases :");
	scanf(" %d",&t);int a[t];


	for(int i = 0 ; i<t ; i ++){
		printf("\nenter the value of a[%d]",i);
		scanf(" %d",&a[i]);
		}
}