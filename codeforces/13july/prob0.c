#include<stdio.h>
int main()
{
    char str[102];
    scanf("%s",str);
    int i;
    for(i=0;;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            if(str[i+1]=='\0')
            {
                printf("YES");
                break ;
            }
        }
        else if(str[i]=='\0')
        {
            printf("NO");
        }
        else if(str[i]=='n')
        {
            if(str[i+1]=='\0')
            {
                printf("YES");
                break ;
            }
        }
        else 
        {
            if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
                continue;
            else if(str[i+1]=='\0')
            {
                printf("NO");
                break;
            } 
            else {
                printf("NO");
                break;
            }        
        }
    }
    return 0;
}