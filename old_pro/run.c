#include<stdio.h>

int main(){

int num[20], i, max ;
void sort_nums();

printf("enter the size of array\n");
scanf("&d",&max);

for(i=0;i <max ;i++)
sort_nums(num,max);

printf("sorted list of numbers\n");

for(i=0;i<max;i++)
printf("%3d\n",num[i]);
}

void sort_nums(a,n)
int a[],n;
{
int i , j  ,dummy;
	for(i=0;i<n;i++){
		for(j=0;j<n;i++){
			if(a[i]>a[j]){
			dummy= a[i];
			a[i]=a[j];
			a[j]=dummy;
			}
		}		
	}
}