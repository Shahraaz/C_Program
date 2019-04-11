#include<iostream>
using namespace std;
int abs(int a)
{
    return a > 0 ? a : -a;
}
int main()
{
    int i,t,n,k,v,arr[100000];
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(i=0,v=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i])
                if(i%2==0)
                    if(v >= 0) v++;
                    else v--;
                else 
                    if(v > 0) v--;
                    else v++;
        }
        if(abs(v)>=k) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}