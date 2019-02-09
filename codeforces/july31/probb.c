#include<stdio.h>
int main()
{
    int n, j, arr[26]={0} ,arr1[26]={0} ,i, moves=0, movecount[5000]={0} ;
    char s[52],t[52],key;
    scanf("%d",&n);
    scanf("%s\n%s",s,t);
    for(i=0;i<n;i++)
    {
        arr[s[i]-'a']++;
        arr1[t[i]-'a']++;
    }
    for(i=0;i<26;i++)
        if(arr[i]!=arr1[i])
        {
            printf("-1");
            return 0;
        }
    for(i=0;i<n;i++)
        if(s[i]!=t[i])
            for(j=i+1;j<n;j++)
                if(s[j]==t[i])
                {
                    key = s[j];
                    for(;j>i;j--)
                    {
                        s[j] = s[j-1];
                        movecount[moves] = j ;
                        moves++;
                    }
                    s[j] = key ;
                    break ;
                }
    printf("%d\n",moves);
    for(i=0;i<moves;i++)
        printf("%d ",movecount[i]);
    return 0;
}