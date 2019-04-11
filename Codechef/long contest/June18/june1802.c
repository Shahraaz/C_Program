#include<stdio.h>
int main()
{
    long int t,a,b,i,na,nb ;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&a,&b);
        if(b==a)
            printf("%d\n",0);
        else if(b==0)
            printf("%d\n",-1);
        else if(b==1)
           {
                if(a==0)
                    printf("%d\n",1);
                else
                   printf("%d\n",-1);
           }
        else
        {
            for(i=a,na=0; i; i = i / 2)
                na += i%2 ;
            for(i=b-1,nb=0; i; i = i / 2 )
                nb += i%2 ;
            if(nb>=na) printf("%d\n",nb-na+1);
            else printf("%d\n",2);
        }
     }
    return 0;
}