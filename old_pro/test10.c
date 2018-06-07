#include<stdio.h>

int i = 0;
void v();

int main(){
printf("%d ", i);
i++;
v();
printf("%d ", i);
v();
printf("%d ", i);

}

void v(){
int i = 100;
printf("%d ", i);
i++;

}