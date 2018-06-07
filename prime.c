#include<stdio.h>
#include<math.h>
int main()
{
int t , p1, p2, p3 , flag, i ;
scanf("%d",&t);
while(t--)
	{
	 fflush(stdin);
	 scanf(" %d %d",&p1,&p2);
	
	 for(p3=1;;p3++)
		{
		 flag = 1 ;
		 for(i=2;i<=sqrt(p1+p2+p3);i++)
			{
			if((p1+p2+p3)%i==0) {flag = 0 ; break ;}
			}
		if(flag==1){printf("%d\n",p3);break;}
		}
	}
return 0 ;
}