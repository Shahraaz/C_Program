#include<stdio.h>
int main()
{
    int t,i,j,temp ;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=1,temp = a[i];i<t;i++)
        for(j=i-1;j>=0;j--)
            if(a[j]>temp)
                a[j+1] = a[j];
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
}
