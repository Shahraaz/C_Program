#include<iostream>
using namespace std;
bool floater(char a,char b)
{
    if(a=='a')
        if(b=='a'|b=='c')
            return true;
        else return false;
    if(b=='a')
        if(a=='a'|a=='c')
            return true;
        else return false;
    if(a=='z')
        if(b=='z'|b=='x')
            return true;
        else return false;
    if(b=='z')
        if(a=='z'|a=='x')
            return true;
        else return false;
    if(a+1==b-1|a-1==b+1||a==b) return true;
    return false;
}
int main()
{
    int t,len,i,flag;
    cin >> t;
    char str[101],tempc,tempc2;
    strat : 
    while(t--)
    {
        cin >> len ;
        cin >> str;
        for(i=0;i<len/2&floater(str[i],str[len-1-i]);i++);
        if(i==len/2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}