#include<stdio.h>
#include<string.h>
char a[100][100][11];
int main()
{
    int n, i, j, r,left,right ,mid,insert ;
    char s[100][11],str2[11],temp[11];
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
        left =0;right =j-1;
        mid = (left+right)/2;
        if(strcmp(str2,a[j][0])<=0)
            printf("%s\n",a[j][0]);
        if(strcmp(str2,a[j][right])>=0)
            printf("%s\n",a[j][right]);
        else 
        {   do
            {
                if(strcmp(a[j][mid],str2)==0)
                    break;
                else if(strcmp(a[j][mid],str2)>0)
                    right = mid-1;
                else left = mid+1 ;
                mid =(left+right)/2 ;
            } while(left<=right);
            printf("%s\n",a[j][mid]);
        }
    }
    return 0;
} 