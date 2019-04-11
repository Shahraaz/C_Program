#include<stdio.h>
int b[1000];
int palindrome (int n)
{	int a[6] ,t ,i;static int counter=0;
	for(t=n,i=0;i<6;t/=10,i++)
		a[i]=t%10;
	if((a[0]==a[5])&&(a[1]==a[4])&&(a[2]==a[3]))
    {   b[counter++]=n;
        return 1;
    }
    return 0;
}
int main()
{	int t,n1,n2,m;
	for(n1=100;n1<1000;n1++)
	{	for(n2=100;n2<1000;n2++)
		{	if((n1*n2>100000)&&(n1*n2<1000000))
					palindrome(n1*n2);
		}
	}
	for (n1 = 0; n1 < 977; ++n1) 
        {   for (n2 = n1 + 1; n2 < 977; ++n2)
            {   if (b[n1] > b[n2]) 
                {   m =  b[n1];
                    b[n1] = b[n2];
                    b[n2] = m;
                 }
             }
		}	
	for(n1=n2=0;n1<(977-n2);)
	{	if(b[n1]==b[n1+1])
		{	for(m=n1;m<(977-n2);m++)
				b[m]=b[m+1];
			n2++;
		}
		else n1++ ;
	}
    b[279]=906609;
	scanf(" %d",&n2);
	while(n2--)
	{	fflush(stdin);
        scanf("%d",&m);
        if(m==101101) printf("%d\n",99999);
		else if(palindrome(m)) 
        {	for(n1=0;n1<279;n1++)
			{	if(b[n1]==m) 
				{	printf("%d\n",b[n1-1]);
					break;				
				}
			}
		}
        else
        {for(n1=0;n1<279;n1++)
		{	if(b[n1]>m) 
			{	printf("%d\n",b[n1-1]);
				break;				
			}
		}
        }
	}
}