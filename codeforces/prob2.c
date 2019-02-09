#include<stdio.h>
int main()
{
    int n,j,i=0;
    scanf("%d",&n);
    int h[n],w[n],
    scanf("%d",&h[i]);
        w[i] = h[i] ;
    for(i=1;i<n;i++)
    {
        scanf("%d",&h[i]);
        w[i] = h[i] ;
        for(j=i-1;j>=0;j--)
        {
            if(w[j]>h[i])
                w[j] = w[j+1];
            else 
            {
                
            }
        }  
    }
    return 0;
}
