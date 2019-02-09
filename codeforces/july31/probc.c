#include<stdio.h>
#include<stdlib.h>
int intcmp(const void *a, const void *b)
{ 
	return *(const int *)b - *(const int *)a;
}
int main()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    int a,b,c[n],i;
    long int sum1,sum2;
    for(i=0,sum1=sum2=0;i<n;i++)
    {
         scanf("%d %d",&a,&b);
         c[i] = a - b;
         sum1 = (sum1 + a);
         sum2 = (sum2 + b);
    } 
    if(sum2>m)
    {
        printf("-1\n");
        return 0;
    }
    qsort(c,n,sizeof(int),intcmp);
    for(i=0;i<n;i++)
    {        
       if(sum1<=m)
        {
            printf("%d\n",count);
            return 0;
        }
        sum1 -= c[i];
        count++;    
    }
}