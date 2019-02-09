#include<stdio.h>
int main()
{
    int n , k,key;
    scanf("%d %d",&n,&k);
    int i,j,arr[n],arr2[n],indices[k];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i] = arr[i] ;
    }
    for(i=1;i<n;i++)
        {
            key = arr2[i];
            j = i-1;
            while(j>=0 && arr2[j]>key)
            {
                arr2[j+1] = arr2[j];
                j = j-1;
            }
            arr2[j+1] = key ;
        }
    int sum = 0,i2; 
    for(i=1;i<=k;i++)
        sum += arr2[n-i];
    printf("%d\n ",sum);
    for(i=0,j=0;i<k;i++)
    {
        
    } 
    for(i=0;i<k;i++)
        printf("%d ",indices[i]);
    return 0;
}