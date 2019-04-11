#include <stdio.h>
long int atol(char *ptr )
{
    long  n=0 ;
    for( ;*ptr ;ptr++)
        n = n*10+*ptr- '0' ; 
    return n;
}

int main() {
    int i,t ;
    long int n, sum  ;
    char c[1000][51],str[16];
    scanf("%d",&t);
    for(i = 0,sum =0 ;i<t;i++)
    {   
        scanf("%s",&c[i][0]);
        c[i][10] = '\0';
        n = atol(&c[i][0]);
        sum+=n ;
    }
    sprintf(str,"%ld",sum);
    str[10] = '\0';
    printf("%s",str);
    
}
