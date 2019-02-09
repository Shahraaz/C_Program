#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int i,j,arr[n],sum,sum1,sum2;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n");
    for(i=0,j=n-1,sum=0,sum1=arr[i++],sum2=arr[j--];i<j;)
    {
        if(sum1==sum2)
        {
            printf("%d %d %d %d\n",sum1,sum2,i,j);
            sum = sum1 ;
            if()
            sum1 += arr[i++] ;
            if(i==j) break ;
            if(sum1==sum2) 
                sum = sum1;
            sum2 += arr[j--];
            if(i==j) break ;
            if(sum1==sum2) 
                sum = sum1;
            printf("%d %d %d %d\n\n",sum1,sum2,i,j);
            
        }
        else if(sum1<sum2)
        {
            printf("%d %d %d %d\n",sum1,sum2,i,j);
            sum1 += arr[i++] ;
            if(i==j) break ;
            if(sum1==sum2) 
                sum = sum1;
            printf("%d %d %d %d\n\n",sum1,sum2,i,j);
            
        }
        else if(sum1>sum2)        
        {
            printf("%d %d %d %d\n",sum1,sum2,i,j);
            sum2 += arr[j--];
            if(i==j) break ;
            if(sum1==sum2) 
                sum = sum1;
            printf("%d %d %d %d\n\n",sum1,sum2,i,j);
            
        }
    }
    printf("%d",sum);
}