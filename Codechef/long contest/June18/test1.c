#include<stdio.h>
int main()
{
    struct strings 
    {
        int i ;
        char str[11];
    };
    struct strings s[100000];
    s[1].i=1;
    scanf("%s",s[1].str);
    printf("%d %s,",s[1].i,s[1].str);
}