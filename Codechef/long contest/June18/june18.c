#include<stdio.h>
int main()
{
    long int t, ai , bi , a, b, n ;
    scanf("%ld",&t);
    while(t--)
    {
        scanf(" %ld %ld",&a,&b);
        if(b==0)
        {
            printf("%d\n",-1);
            continue;
        }
        for(ai=0;a;a/=2)
            if(a%2) ai++;
        for(bi=0,b=b-1;b;b/=2)
            if(b%2) bi++;
        if(bi<ai) printf("%d\n",-1);
        else printf("%ld\n",bi-ai+1);       
    }
    return 0 ;
}