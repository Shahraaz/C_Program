#include<stdio.h>
int main()
{
	int t ,k, n, i,j,count,divisors;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		for(i=1;;i++)
		{
            divisors = 1 ;
            n = i*(i+1)/2 ;
            for(count = 0 ; n%2==0; n= n/2 , count ++) ;
                if(count) divisors *= (count+1);
            for(j=3;j*j<n+1;j+=2)
            {
                for(count = 0 ; n % j ==0 ; n /= j , count++);
                if(count) divisors *= (count+1) ;                    
            }
            if(n>2) divisors *= 2 ;
            if(divisors>k)
            {   printf("%d\n",i*(i+1)/2);
                break ;
            }
        }
    }    
	
    return 0 ;
}