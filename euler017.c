#include<stdio.h>
void t100(int);
void dig(long long);
void txt(long num)
{  switch(num)
   {
	case 1 : printf("One "); break ;
	case 2 : printf("Two "); break ;
	case 3 : printf("Three "); break ;
	case 4 : printf("Four "); break ;
	case 5 : printf("Five "); break ;
	case 6 : printf("Six "); break ;
	case 7 : printf("Seven "); break ;
	case 8 : printf("Eight "); break ;
	case 9 : printf("Nine "); break ;
	case 10 : printf("Ten "); break ;
	case 11 : printf("Eleven "); break ;
	case 12 : printf("Twelve "); break ;
	case 13 : printf("Thirteen "); break ;
	case 14 : printf("Fourteen "); break ;
	case 15 : printf("Fifteen "); break ;
	case 16 : printf("Sixteen "); break ;
	case 17 : printf("Seventeen "); break ;
	case 18 : printf("Eighteen "); break ;
	case 19 : printf("Nineteen "); break ;
	case 20 : printf("Twenty "); break ;
	case 30 : printf("Thirty "); break ;
	case 40 : printf("Forty "); break ;
	case 50 : printf("Fifty "); break ;
	case 60 : printf("Sixty "); break ;
	case 70 : printf("Seventy "); break ;
	case 80 : printf("Eighty "); break ;
	case 90 : printf("Nienty "); break ;
	}
}
void t100(int t)
{
	if(t>=100)
	{
		txt(t/100);
		printf("Hundred ");
	}
	t = t %100 ;
	if(t<=20) 
		txt (t);
	else {
		txt(t/10*10);
		txt(t%10);
	}
}
void dig(long long n)
{
	if(n==0)
		printf("Zero");
	if(n>1000000000){
		t100(n/1000000000);
		printf("Billion ");
	}
	n%=1000000000 ;
	if(n>1000000){
		t100(n / 1000000);
		printf("Million ");
	}
	n%=1000000 ;
	if(n>1000){
		t100(n / 1000);
		printf("Thousand ");
	}
	n%=1000 ;
	t100(n);
	printf("\n");
}
int main()
{
	int t ;
	long long int num  ;
	scanf("%d",&t);
	while(t--)
	{
		scanf(" %lld",&num);
		dig(num);
	}
}