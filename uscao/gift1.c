/*
ID: shahraa2
LANG: C
TASK: gift1
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person
{
    char name[20];
    int money ;
};
int main()
{
    FILE *fin = fopen ("gift1.in","r");
    FILE *fout = fopen ("gift1.out","w");
    struct person persons[11];
    int i, np, giftamt,per,j,k,dist,z;
    char temp[20] ;
    fscanf(fin,"%d",&np);
    for(i=0;i<np;i++)
    {    
        fscanf(fin,"%s",&persons[i].name);
        persons[i].money = 0;
    }
    for(i = 0;i<np;i++)
    {
        fscanf(fin,"%s",temp);
        fscanf(fin," %d %d",&giftamt,&per);
        if(per == 0)
            continue ; 
        dist = giftamt / per ;
        for(k=0;k<np;k++)
            if(strcmp(temp,persons[k].name)==0)
            {
                persons[k].money = persons[k].money - giftamt + giftamt%per;
                break;
            }
        while(per--)
        {
            fscanf(fin,"%s",temp);
            for(k=0;k<np;k++)
                if(strcmp(temp,persons[k].name)==0)
                {
                    persons[k].money += dist;
                    break;
                }
        }
    }
    for(i=0;i<np;i++)
        fprintf(fout,"%s %d\n",persons[i].name,persons[i].money);
    exit(0);
}