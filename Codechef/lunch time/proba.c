#include<stdio.h>
int main()
{
    int t,a[3],b[2],key,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&b[0],&b[1]);
        for(i=1;i<3;i++)
        {
            key = a[i];
            j = i-1 ;
            while(j0&&a[j]>key)
            {
                a[j+1] = a[j];
                j = j-1;
            }
            a[j+1] = key;
        }
        for(i=1;i<2;i++)
        {
            key = b[i];
            j = i-1 ;
            while(j&&b[j]>key)
            {
                b[j+1] = b[j];
                j = j-1;
            }
            b[j+1] = key;
        }
        if(a[0]+a[1]+a[2]==b[0]+b[1])
        { 
            if((a[0]<=b[0])&(a[2]<=b[1]))
                printf("YES\n");
            else  printf("NO\n");
        }
        else  printf("NO\n");
    }
    
    return 0;
}