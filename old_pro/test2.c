#include<stdio.h>
int main() {
    char input_string[105]; 
    
   gets(input_string); 
    printf("Hello, World.\n");
    printf("%s", input_string);
    
    return 0;
}