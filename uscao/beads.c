/*
ID: shahraa2
LANG: C
TASK: beads
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fin = fopen("beads.in","r");
    FILE *fout = fopen("beads.out","w");
    int n,i,j,countl,countr,count=0;
    fscanf(fin,"%d\n",&n);
    char str[351],keyl,keyr;
    fscanf(fin,"%s",str);
    for(i=1,count=1;i<n;i++){
        if(str[i] == str[i-1])count++;
        else break;
    }
    if(count==n){
        fprintf(fout,"%d\n",count);
        exit(0);
    }
    for(i=0,count=0;i<n;){
        keyl = str[i];
        keyr = str[(i+1)%n];
        countl = countr = 0;
        if(keyl=='w'|keyr=='w'){
            i++;
            continue;
        }
        for(j=i+1;;j++){
            j = j%n;
            if(str[j]=='w'|str[j]==keyr)
                countr++;
            else break;
        }
        for(j=i++;;j--){
            if(j<0) j = n - 1;
            j = j%n;
            if(str[j]=='w'|str[j]==keyl)
                countl++;
            else break;
        }
        if(count < (countl+countr))
            count = (countl+countr); 
    }
    fprintf(fout,"%d\n",count);
    exit(0);
}