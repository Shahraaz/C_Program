#include<stdio.h>
long long int pow(long long int n,long long int power)
{
    if(power==0) return 1;
    long long temp = pow(n,power/2)%10000000;
    if(power%2) return (temp*temp*n)%10000000000;
    return (temp*temp)%10000000000;
}
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        if(k==1)
            printf("%d\n",n);
        else printf("%lld\n",((long long int)k*((long long int)pow((long long int)k,n)-1)/(k-1))%1000000007);
    }
    return 0;
}