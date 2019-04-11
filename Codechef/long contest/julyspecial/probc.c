#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0 | a==0) return 0;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}
int main()
{
    int t;
    int arr[100000],n,i,j,check;
    scanf("%d",&t);
    start :
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
           if(arr[i]==1)
            {
                printf("YES\n");
                goto start;
            }
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j]) continue ;
                check = gcd(arr[i],arr[j]);
                if(check==1)
                {
                    printf("YES\n");
                    goto start;
                }
            }
        if(i==n) printf("NO\n");
    }
    return 0;
}