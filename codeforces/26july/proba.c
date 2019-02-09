#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char chosen,str[n+1];
    scanf("%s",str);
    int i,j,key,weight=0;
    for(i=1;i<n;i++)
    {
        key = str[i];
        j = i-1;
        while(j>=0&str[j]>key)
        {
            str[j+1] = str[j];
            j--;
        }
        str[j+1] = key;
    }
    chosen = str[0],j=1,weight = str[0]-'a'+1;
    for(i=1;i<n&j<k;i++)
        if(str[i]-chosen>1)
        {
            chosen = str[i];
            weight += str[i]-'a'+1;
            j++;
        }
    if(j==k)  printf("%d",weight);
    else printf("-1");
    return 0;
}