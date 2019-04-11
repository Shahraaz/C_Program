#include<stdio.h>
#include<string.h>
int main()
{
char s1[10],s2[10];
gets(s1);puts(s1);
gets(s2);puts(s2);
int i  = strcmp(s1,s2);
printf("%d",i);
}