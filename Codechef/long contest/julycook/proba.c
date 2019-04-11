#include<stdio.h>
int main()
{
    int t,n,i;
    char str[101],temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",str);
        for(i=0;i<n-n%2;i+=2)
        {
            temp = str[i] ;
            str[i] = str[i+1];
            str[i+1] = temp;
        }
        for(i=0;i<n;i++)
                str[i] = 'z' - str[i] + 'a'  ;
        printf("%s\n",str);
    }
    return 0;
}