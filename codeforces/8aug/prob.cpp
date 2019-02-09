#include<iostream>
using namespace std;
int main()
{
    long long int n,i,oo,oi,io,ii;
    cin >> n;
    char b1[n+1],b2[n+1];
    cin >> b1;
    cin >> b2;
    oo=oi=io=ii=0;
    for(i=0;i<n;i++)
    {
        if(b1[i]=='0'&b2[i]=='0') oo++;
        else if(b1[i]=='0'&b2[i]=='1') oi++;
        else if(b1[i]=='1'&b2[i]=='0') io++;
        else  ii++;
    }
    cout << oo*ii+io*oi+oo*io << endl;
    return 0;
}