#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,end,n,k,x,arr[20000];
    long long int max,s;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        s = 0;
        for(i=0;i<k;i++)
        {
            cin >> arr[i];
            s += arr[i] ;
        }
        sort(arr,arr+k);
        max = arr[0] + x;
        for(i = 0,end = k - 1 ; i < n - k ;i++)
        {
            while(arr[end]==max&end>=0) max--;
            s += max;
            if(end>0) end--;
        }
        cout << s << endl;
    } 
    return 0;
}