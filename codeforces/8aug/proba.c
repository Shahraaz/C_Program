#include<stdio.h>
int main()
{
    int n,i,sum,summax,rank;
    scanf("%d",&n);
    int arr[n][4];
    i = 0;
    scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
    summax = arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
    for(i=1,rank=1;i<n;i++)
    {
        scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
        sum = arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
        if(summax<sum) rank++;      
    }
    printf("%d\n",rank);
    return 0;
}