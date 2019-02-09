/*
ID: shahraa2
LANG: C
TASK: ride
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fin = fopen ("ride.in","r");
    FILE *fout = fopen ("ride.out","w");
    int i,sum1,sum2;
    char a[100],b[100];
    fscanf(fin,"%s\n%s\n",a,b);
    for(i=0,sum1=1;a[i];i++)
        sum1 *= a[i] - 'A'+1;
    for(i=0,sum2=1;b[i];i++)
        sum2 *= b[i] - 'A'+1;
    if(sum1%47 == sum2%47) fprintf(fout,"GO\n");
    else fprintf(fout,"STAY\n");
    exit(0);
}