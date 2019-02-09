/*
ID: shahraa2
LANG: C
TASK: friday
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fin = fopen ("friday.in","r");
    FILE *fout = fopen ("friday.out","w");
    int year=1900,i,n,days=13,arr[7]={0};
    fscanf(fin,"%d",&n);
    for(i=0;i<n;i++)
    {
        days = days%7;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 28;
        if(year%4==0) days++;
        if(year%100==0) days--;
        if(year%400==0) days++;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 30;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 30;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 30;
        arr[days%7]++;
        days += 31;
        arr[days%7]++;
        days += 30;
        arr[days%7]++;
        days += 31;
        year++;
    }
    for(i=0;i<6;i++)
        fprintf(fout,"%d ",arr[(i+6)%7]);
    exit(0);
}