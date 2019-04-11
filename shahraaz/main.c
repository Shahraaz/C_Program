#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char c,name[30],str[101];
    scanf("%c",&c);
    fflush(stdin);
    gets(name);
    gets(str);
    printf("%c\n%s\n%s\n",c,name,str);
    return 0;
}
