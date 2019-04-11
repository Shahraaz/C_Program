#include<stdio.h>
int main()
{
    int t,n,i,j,z,min,counter,flag,arr[101],arr2[101];
    scanf("%d",&t);
    start :
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
            if(arr[i]==1) 
            {
                for(j=0,counter=0;j<n;j++)
                {
                    if(i==j) continue;
                    if(arr[j]==1) continue;
                    if(arr[j]==2)
                    {
                        printf("2\n");
                        goto start;
                    }
                    if(arr[j]%2==0) continue ;
                    for(z=3,flag=0;z*z<=arr[j];z+=2)
                        if(arr[j]%z==0)
                        {
                            flag = 1;
                            break;
                        }
                    if(flag==0)
                        arr2[counter++] = arr[j];
                }
                if(counter==0)
                {   
                    printf("-1\n");
                    goto start;
                }    
                else
                {
                    for(i=0,min=101;i<counter;i++)
                        min = arr2[i] < min ? arr2[i] : min ;
                    printf("%d\n",min);
                    goto start;
                }
                break ;   
            }
            else if(i==n-1)
                printf("-1\n");
    }
    return 0;
}