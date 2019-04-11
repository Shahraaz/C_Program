#include<iostream>
using namespace std;
int main()
{
    int sum,i,t,n,arr[100000],cnt;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sum = cnt = 0 ;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            if(arr[i]>0) cnt++;
        }
        if( sum >= 100 & sum < 100 + cnt )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}