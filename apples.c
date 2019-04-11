#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()(
{
    int s,t,a,b,m,n,temp,i,applecounter=0,orangecounter=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&temp);
        if((a+temp)>=s&(a+temp)<=t) 
            applecounter++;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);   
        if((b+temp>=s&(b+temp<=t)))
            orangecounter++;
    }
    printf("%d\n%d",applecounter,orangecounter);
    return 0;
}
