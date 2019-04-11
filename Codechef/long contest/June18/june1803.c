#include<stdio.h>
#include<string.h>
char a[1000][1000][11];
int main()
{
    int n, i, j, r,left,len,maxlen,maxindex,right ,mid,insert ;
    char s[1000][11],str2[11],temp[11];
    scanf(" %d",&n);
    for(i=0;i<n;i++)
        {
            fflush(stdin);
            scanf("%s",s[i]);
        }
    strcpy(a[0][0],s[0]);
    for(j=1;j<n;j++)
    {
        left =0;right =j-1;
        mid = (left+right)/2;
        if(strcmp(s[j],a[j-1][0])<=0)
            insert = 0;
        else if(strcmp(s[j],a[j-1][right])>=0)
            insert = right+1;
        else 
        {   do
            {
                if(strcmp(a[j-1][mid],s[j])==0)       
                {
                    insert = mid ;
                    break;
                }
                else if(strcmp(a[j-1][mid],s[j])>0)
                    right = mid-1;
                else left = mid+1 ;
                mid =(left+right)/2 ;
            } while(left<=right);
            insert = mid+1;
        }
        for(i=0;i<insert;i++)
            strcpy(a[j][i],a[j-1][i]);
        strcpy(a[j][insert],s[j]);
        for(i=insert+1;i<=j;i++)
            strcpy(a[j][i],a[j-1][i-1]);
    }
    scanf(" %d",&n);
    while(n--)
    {       
        fflush(stdin);
        scanf("%d %s",&j,str2);
        for(i=0,maxlen=0,maxindex=0;i<j;i++)
            for(r=0,len=0;r<strlen(str2);r++)
                if(str2[r]==a[j-1][r])
                    len++;
                else break;
            if(len>=maxlen)
            {
                maxlen = len ;
                maxindex = i;
            }
            else break ;
    }
    return 0;
} 