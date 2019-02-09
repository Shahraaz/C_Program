#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,k;
    cin >> n >> k;
    unsigned long long int min,x = k/2;
    if(n==1|n==2|k==1|k==2)
        cout << 0 << endl;
    else if(x<n)
    {
        min = x < (n-x) ? x : (n - x);
        cout << min << endl;
    } 
    else cout << 0 << endl;
    return 0;
}