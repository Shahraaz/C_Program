#include<stdio.h>
long int a[11][11] ;
long int pow(int n,int power)
{
    if(power==0) return 1 ;
    long int temp = pow(n,power/2);
    if(power%2) return temp*temp*n;
    return temp*temp ;
}
int ncr(int n,int r)
{
    if(r == 0 | n==r)
        return 1;
    if(a[n][r]) return a[n][r] ;
    return a[n][r] = ncr(n-1,r-1)+ncr(n-1,r);
}
int main()
{
    int arr[5001];
    int t,n,k,i,j,key;
    long int result,cr;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        for(i=2;i<=n;i++)
        {
            key = arr[i];
            j = i-1;
            while(j>=1 && arr[j]>key)
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key ;
        }
        cr = ncr(n-1,k-1);
        for(i=1,result=1;i<k;i++)
            result = (result*pow(arr[i],cr-ncr(n-i,k-1)))%1000000007 ; 
        for(;i<=n-k;i++)
            result = (result*pow(arr[i],cr-ncr(n-i,k-1)-ncr(i-1,k-1)))%1000000007 ; 
        for(;i<=n;i++)
            result = (result*pow(arr[i],cr-ncr(i-1,k-1)))%1000000007 ; 
        printf("%ld\n",result);
    }
    return 0;
} 