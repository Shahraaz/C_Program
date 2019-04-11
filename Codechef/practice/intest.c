#include<stdio.h>
int main()
{
    int n , k ,t,counter=0 ;
    scanf("%d %d",&n,&k);
    while(n--)
    {
        scanf("%d",&t);
        if(t%k==0) counter++;
    }
    printf("%d",counter);
    return 0 ;
}