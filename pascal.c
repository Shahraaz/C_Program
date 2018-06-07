#include<stdio.h>
int main()
{
	int n , i , i2 , i3 ;
	printf("enter number of lines you wish to print :\n");
	scanf("%d",&n); 
	int a[n] ;a[0]=1;
	for(i=1;i<=n;i++) {
		for(i2 = 1;i2 <= n-i;i2++) 
			printf(" ");
		if(i%2!=0){
			for(i2=i3=i/2;i2>0;i2--,i3++){
				a[i2]=a[i3]=a[i2-1]+a[i2];
			}
				a[i2]=a[i3]=1;
		}
		else {
		for(i2=i/2-1,i3=i/2;i2>0;i2--,i3++){
				a[i2]=a[i3]=a[i2-1]+a[i2];
			}
				a[i2]=a[i3]=1;
		}
		for(i2=0;i2<i;i2++)
			printf("%d ",a[i2]);
		printf("\n");
	} 
}