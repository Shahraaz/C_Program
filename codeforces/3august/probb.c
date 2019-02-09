#include<stdio.h>
int main()
{
    int l,r,i,j,n,count,m,q,flag=1;
    scanf("%d %d %d",&n,&m,&q);
    char s[n+1],t[m+1];
    scanf("%s %s",s,t);
    for(i=0;i<q;i++)
    {
        scanf("%d %d",&l,&r);
        l--;
        if(r-l < m)
            printf("0\n");
        else
        {
            count = 0;
            for(;l<r;l++)
            {
                flag = 1;
                for(j=0;j<m;j++)
                    if(s[l+j]!=t[j]|l+j>=r)
                    {   
                        flag = 0;
                        break;
                    }
                if(flag)
                    count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}