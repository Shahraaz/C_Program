#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    long int i,arr[n],days=0,namecurr=0,pages=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        namecurr = arr[i] + namecurr%m;
        printf("%ld ",namecurr/m);
    }
    return 0;
}