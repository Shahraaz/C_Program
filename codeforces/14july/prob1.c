#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",str);
    int i,len = strlen(str),alter,alter1=0,alter2=0;
    start:
    start1:
    alter = alter1;
    for(i=len-1,alter1=0;i>=0;i--)
        if(str[i]=='2'&str[i+1]=='1')
        {
            str[i] = str[i]^str[i+1] ;
            str[i+1] = str[i]^str[i+1] ;
            str[i] = str[i]^str[i+1] ;
            alter1++;
        }
    if(alter1!=0) goto start1 ;
    start2:
    alter = alter1 + alter2 ;
    for(i=len-1,alter2=0;i>=0;i--)
        if(str[i]=='1'&str[i+1]=='0')
        {
            str[i] = str[i]^str[i+1] ;
            str[i+1] = str[i]^str[i+1] ;
            str[i] = str[i]^str[i+1] ;
            alter++;
            alter2++;
        }
    if(alter2!=0) goto start2 ;    
    if(alter!=0) goto start ;
    printf("%s",str);
    return 0;
}