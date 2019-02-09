#include<stdio.h>
int main()
{
    int i,n,n1,m,li,ri,arr[101]={0},count;
    scanf("%d %d",&n,&m);
    while(n--)
    {
        scanf("%d %d",&li,&ri);
        for(;li<=ri;li++)
            arr[li] = 1;
    }
    for(li=1,count=0;li<=m;li++)
        if(arr[li]==0) count++;
    printf("%d\n",count);
    for(li=1;li<=m;li++)
        if(arr[li]==0) printf("%d ",li);
    return 0;
}