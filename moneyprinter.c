#include<stdio.h>
void t20(int);
void txt(long num)
{  switch(num)
   {
	case 1 : printf("one "); break ;
	case 2 : printf("two "); break ;
	case 3 : printf("three "); break ;
	case 4 : printf("four "); break ;
	case 5 : printf("five "); break ;
	case 6 : printf("six "); break ;
	case 7 : printf("seven "); break ;
	case 8 : printf("eight "); break ;
	case 9 : printf("nine "); break ;
	case 10 : printf("ten "); break ;
	case 11: printf("eleven "); break ;
	case 12 : printf("twelve "); break ;
	case 13 : printf("thirteen "); break ;
	case 14 : printf("fourteen "); break ;
	case 15 : printf("fifteen "); break ;
	case 16 : printf("sixteen "); break ;
	case 17 : printf("seventeen "); break ;
	case 18 : printf("eighteen "); break ;
	case 19 : printf("nineteen "); break ;
	case 20 : printf("twenty "); break ;
	case 30 : printf("thirty "); break ;
	case 40 : printf("forty "); break ;
	case 50 : printf("fifty "); break ;
	case 60 : printf("sixty "); break ;
	case 70 : printf("seventy "); break ;
	case 80 : printf("eighty "); break ;
	case 90 : printf("ninty "); break ;
	case 100 : printf("hundred "); break ;
	case 1000 : printf("thousand "); break ;
	case 100000 : printf("lakh "); break ;
	case 10000000 : printf("crore ");
   }
}
void t20(int t)
{
	if(t<=20) 
		txt (t);
	else {
		txt(t/10*10);
		txt(t%10);
	}
}
void digtotxt(long n)
{
	int t ;
	if(n==0)
		printf("zero");
	if(n>10000000){
		t20(n/10000000);
		txt(10000000);
	}
	n%=10000000 ;
	if(n>100000){
		t20(n / 100000);
		txt(100000);
	}
	n%=100000 ;
	if(n>1000){
		t20(n / 1000);
		txt(1000);
	}
	n%=1000 ;
	if(n>100){
		txt(n/100);
		txt(100);
	}
	n%=100 ;
	t20(n);
	
}
void currency(double rps)
{	digtotxt(rps);
	printf(" Rupees & ");
	int pp = (rps-(long)(rps))*100 ;
	digtotxt(pp);
	printf(" paise");
}
int main()
{
	double num  ;
	printf("enter the amount in digits :\n");
	scanf("%lf",&num);
	currency(num);
}