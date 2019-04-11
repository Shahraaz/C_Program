#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,end,n,k,x,arr[20000],min;
    long long int max,s;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        for(i=0;i<k;i++)
            cin >> arr[i];
        sort(arr,arr+k);
        max = arr[0] + x;
        s = max*(max+1)/2 - (max-n+1)*(max-n)/2 ;
        min = arr[0] + x - n + 1;
        for(i = 0; i < k ;i++)
            if(arr[i]<min)
                s += arr[i] - min++;
            else break;
        cout << s << endl;
    } 
    return 0;
}