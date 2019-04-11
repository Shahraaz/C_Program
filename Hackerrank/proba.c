#include<stdio.h>
#include<stdlib.h>
int power(int base,int po)
{
    if(po==0) return 1;
    long int temp = power(base,po/2);
    if(po%2)
        return (temp*temp*base);
    return (temp*temp);
}
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
int main()
{
    int i,j,count,t,dyna,n,key,arr[100000],arr2[100000];
    scanf("%d",&t);
    while(t--)
    {
        count = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(int),cmp);
        for(i=0;i<n;i++)
        {
            dyna = 0;
            for(j=0;j<i;j++)
            {
                if(gcd(arr[i],arr[j])!=1)
                {   
                    if(!dyna)
                        key = arr2[j];               
                    else 
                        arr2[j]=key;    
                    dyna = 1;
                }
            }
            if(dyna) arr2[i]=key;
            else{
                count ++;
                arr2[i] = count ;
            }
        }
        qsort(arr2,n,sizeof(int),cmp);
        for(i=1,count=1,key=arr2[0];i<n;i++)
        {
            if(arr2[i]>key)
            {
                count++;
                key = arr2[i];
            }
        }
        printf("%d\n",power(2,count)-2);
        
    }
    return 0;
}