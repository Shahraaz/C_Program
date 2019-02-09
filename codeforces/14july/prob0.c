#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int c[n],a[m],i,j;
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=j=0;i<n&j<m;i++)
        if(c[i]<=a[j])
            j++;
    printf("%d",j);
    return 0;
}