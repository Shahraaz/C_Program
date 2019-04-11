#include<stdio.h>
int main()
{
	int a[20][20] , i,j,max ;
	
		for(i=0;i<20;i++)
			for(j=0;j<20;j++)
				scanf(" %d",&a[i][j]);
		max=0;
		for(i=0;i<20;i++)
			for(j=0;j<17;j++)
				if (a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3] > max ) max =  a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3] ;
		for(i=0;i<17;i++)
			for(j=0;j<20;j++)
				if (a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j] > max ) max =  a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j] ;
		for(i=0;i<17;i++)
			for(j=0;j<17;j++)
				if (a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3] > max ) max =  a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3] ;
		for(i=0;i<17;i++)
			for(j=3;j<20;j++)
				if (a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3] > max ) max =  a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3] ;
		printf("%d\n",max);
	
    return 0;
}
