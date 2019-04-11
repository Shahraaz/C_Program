#include<stdio.h>
int main()
{
    int t, n, i, j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("1 1");
        j = n-( n + n % 2 )/2;
        for(i=0;i<j;i++)
            printf("0");
        printf("\n");
    }
    return 0;
}