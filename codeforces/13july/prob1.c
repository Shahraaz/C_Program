#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h[n],w[n],i,low,high,prevheight=0;
    for(i=0;i<n;i++)
        scanf("%d %d",&h[i],&w[i]);
    high = h[0] > w[0] ? h[0] : w[0] ;
    prevheight = high ;
    for(i=1;i<n;i++)
    {
        low = h[i] < w[i] ? h[i] : w[i] ;
        high = h[i] > w[i] ? h[i] : w[i] ;
        if(prevheight < low) break ;
        else if(prevheight >= high) prevheight = high;
        else prevheight = low ;
    }
    if(i==n) printf("YES");
    else printf("NO");
    return 0;
}