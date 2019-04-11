#include<stdio.h>
int main()
{
    int arr[100000]={0},n,m,q,l,r,k,i,counter;
    int* ptr;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=m;i--;)
    {
        scanf("%d %d",&l,&r);
        for(l--;l<r;l++)
            arr[l]++;
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&k);
        counter = 0;
        k--;
        for(ptr = arr;ptr < arr + n;ptr++)
            if(*ptr>k) counter++;
        printf("%d\n",counter);
    }
    return 0;
}