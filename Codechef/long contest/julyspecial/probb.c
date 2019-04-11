#include<stdio.h>
int main()
{
    int t,i;
    long int sum1,sum2;
    char num1[100001],num2[100001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",num1,num2);
        for(i=0,sum1=0;num1[i];i++)
            sum1 += num1[i] - '0' ;
        for(i=0,sum2=0;num2[i];i++)
            sum2 += num2[i] - '0' ;
        printf("%d\n",(sum1%3*sum2%3)%3);
    }
    return 0;
}