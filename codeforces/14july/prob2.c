#include<stdio.h>
int main()
{
    int n , m ;
    scanf("%d %d",&n,&m);
    int a[n+1],i,j,d,x;
    for(i=1;i<=n;i++)
        a[i]=0;
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&x,&d);
        for(j=1;j<n;j++)
        {
            if(i<n)
                a[j] = a[j] + x + d*(i>j)?(i-j):(j-i));
            else a[j] = a[j] + x + d*(n>j)?(n-j):(j-n));
        }
        
    }
}