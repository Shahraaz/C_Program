#include <stdio.h>

int main() {
    int i,t,carry,n;
    scanf ("%d",&t); 
    long int arr[10001][178]={1},j,temp,sum ;
    for(j=1;j<=10000;j++)
        for(carry = 0 , temp =0 ,i=0;i<178;i++)
        {
            temp = arr[j-1][i]*2 + carry ;
            arr[j][i] = temp % 100000000000000000 ;
            carry = temp / 100000000000000000 ;
        }
    while(t--)
    {
        fflush(stdin);
        scanf(" %d",&n);
        for(sum = 0,i=0;i<178;i++)
			for(j=arr[n][i];j;j /= 10)
				sum += j%10 ;
		printf("%ld\n",sum);    
    }
}