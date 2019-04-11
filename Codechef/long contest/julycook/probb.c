#include<stdio.h>
int main()
{
    int t;
    int m,n,i,j,check,k ;
    char str[1002][1002];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%s",str[i]);
        for(i=0,check=0;i<n;i++)
            for(j=0;j<m;j++)
                if(str[i][j]=='1')
                {
                    check = 1;
                    goto end;
                }
        if(check==0)
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    printf("-1 ");
                printf("\n");
            }
        else 
        {
            end:
            for(i=0;i<n;i++)
            {  
                for(j=0;j<m;j++)
                    if(str[i][j]=='1')
                        printf("0 ");
                    else 
                    {
                        check = 0;
                        for(k=0;k<m;k++)
                            if(str[i][k]=='1')
                            {
                                printf("1 ");
                                check = 1;
                                break ;
                            }
                        if(check==0)
                            for(k=0;k<n;k++)
                                if(str[k][j]=='1')
                                {
                                    printf("1 ");
                                    check = 1;
                                    break ;
                                }
                        if(check==0) printf("2 ");
                    }
                printf("\n");
            }
        }
    }
    return 0;
}