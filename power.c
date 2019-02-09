//from master
#include<stdio.h>
float log1 (float a)
{
	float x = (a-1)/(a+1) ;
	float f2 =  2*(x+1/3.0*x*x*x+1/5.0*x*x*x*x*x+1/7.0*x*x*x*x*x*x*x) ;
	return f2 ;
}
float fraction(float a,float b)
{	if ((b<0.1)) return 1 ;
	float f = log1(a);
	f *= a ;
	return (1+f +f*f /2 +f*f*f/3+f*f*f*f/4+f*f*f*f*f/5+f*f*f*f*f*f/6);
}
float power(float a , float b)
{	int i ;
	float f=1 ;
	for(i=0;i<(int)b;i++)
		f *= a ;
	f *= fraction(a,b-(int)b);
	return f ;
}
int main()
{
	float a , b ,res;
	scanf("%f %f",&a,&b);
	res = power (a,b);
	printf("%f",res);
}