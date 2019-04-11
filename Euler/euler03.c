#include<stdio.h>
#include<math.h>
int main()
{
	long int n,max,i ;
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        fflush(stdin);
        scanf(" %ld",&n);
        while(n%2==0)
        {   n /= 2 ;
            max = 2 ;
        }
        for(i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {   n /= i ;
                max = i ;
            }
        }
        if(n>1) max = n ;
        printf("%ld\n",max);
    }
}