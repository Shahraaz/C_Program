#include<iostream>
#include<cmath>
using namespace std;
unsigned long long int arr[3][1000000000+1]={0};
int main()
{
    int n,q,i,j,ctr=1;
    cin >> n >> q;
    for(i=1;i<=n;i+=2)
        arr[1][i] = ctr++;
    cout << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i>2)
        cout << i/2*n+arr[i/2+1][j] << " ";
        else  cout << i/2*n+arr[i][j] << " ";
        cout << endl;
    }
    for(i=2;i<=n;i+=2)
        arr[2][i] = ctr++;
    ctr = ceil((float)n*n/2)+1;
     cout << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i>2)
        cout << i/2*n+arr[i/2+1][j] << " ";
        else  cout << i/2*n+arr[i][j] << " ";
        cout << endl;
    }
    for(i=2;i<=n;i+=2)
        arr[1][i] = ctr++;
        cout << endl;
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i>2)
        cout << i/2*n+arr[i/2+1][j] << " ";
        else  cout << i/2*n+arr[i][j] << " ";
        cout << endl;
    }
    for(i=1;i<=n;i+=2)
        arr[2][i] = ctr++;
        cout << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i>2)
        cout << i/2*n+arr[i/2+1][j] << " ";
        else  cout << i/2*n+arr[i][j] << " ";
        cout << endl;
    }
   /* while(q--)
    {
        cin >> i >> j;
        cout << i/2*n+arr[i%2][j] << endl;
    }*/
    return 0;
}