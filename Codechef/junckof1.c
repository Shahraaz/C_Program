#include<stdio.h>
int main()
{
    int t, a1, b, n, i, j ;
    scanf("%d",&t);
    while(t--)
    {
        int a[10001]={0};
        scanf(" %d %d %d",&n,&a1,&b);
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            a[j]++;
        }   
        printf("%f\n",(float)a[a1]*a[b]/n/n);
    }
    return 0 ; 
}