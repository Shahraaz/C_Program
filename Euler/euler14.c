#include <stdio.h>
int main() 
{
    int t,i,length, n,maxindex,maxlength,a[500001] ;
    long int d ;
	scanf("%d",&t);
    a[1] = 1 ;
    a[2] = 2 ;
    for(i=3,maxlength=0,maxindex=0;i<=200000;i++)
    {
         if(i%2==0)
		 {
			a[i] = a[i/2] +1 ;
			if(length>=maxlength)
          {
              maxlength = length;
              maxindex = i ;
          }
          a[i]=maxindex ;
			break ;
			}
		 for(d=i,length = 0;d>1;)
          {
              d = d % 2 ?(3*d +1) : (d/2) ;
              length++;
			  if(d<i)
			  {
				  a[i] = length + a[d];
				  break;
			  }
          }
          if(length>=maxlength)
          {
              maxlength = length;
              maxindex = i ;
          }
          a[i]=maxindex ;
    }
    while(t--)
    {
        fflush(stdin);
		scanf("%d",&n);
        printf("%d\n",a[n]);
    }
}
