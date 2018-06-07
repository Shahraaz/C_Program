#include<stdio.h>
#include<string.h>

void pr_rev(char *s) ;

int main(){
pr_rev("I am in C.");
}

void pr_rev(char *s){
int t ;
for(t = strlen(s)-1;t<=0;t--) putchar(s[t]);
}
