#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, r ;
    char s[1000][11],str2[11];
    scanf(" %d",&n);
    for(i=0;i<n;i++)
        {
            fflush(stdin);
            scanf("%s",s[i]);
        }
    scanf(" %d",&n);
    while(n--)
    {       
        fflush(stdin);
        scanf("%d %s",&j,str2);
        int len , maxlen, maxindex,counter,,a[1000];
        for(i=0,maxlen=0,maxindex=0,counter=0;i<j;i++)
        {   
            for(r=0,len=0;str2[r]&&s[i][r];r++)
            {
               if(str2[r]==s[i][r]) len ++;
               else break ;
            }
            if(maxlen<len)
            {
                maxlen = len ;
                maxindex = i ;
                counter=1;
                a[counter]=maxindex;
            }
            if(maxlen==len)
            {
                maxindex =   strcmp(s[i],s[maxindex])<0? i : maxindex ; 
                counter ++ ;
                a[counter]=i;
            }
        }
        strcpy(str2,NULL);
        for(i=1,maxindex=1;i<=counter;i++)
        {
           if(strcmp(str2,a[i])<0)
           strcpy(str2,s[a[i]]);
        }
        printf("%s\n",str2);
    }
    return 0;
} 