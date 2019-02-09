#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,m,flag=0,i;
    cin >> n >> m;
    char s[n],t[m];
    cin >> s >> t;
        int l = 0, l2 = 0,li,l2i;
    for(i=0;i<n;i++)
        if(s[i]=='*') flag = 1;
    if(flag==1)
    {
        if(n<=m+1)
        {
            for(l=0;l<n;l++)
                if(s[l]!=t[l])
                    break;
            if(s[l]!='*') cout << "NO" << endl;
            else
            {
                for(li=n-1,l2i=m-1;li>l&l2i>=l2;li--,l2i--)
                    if(s[li]!=t[l2i]) break;
                if(li==l) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        } 
        else
        cout << "NO" << endl; 
    }
    else{
        if(strcmp(s,t)==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}