#include<iostream>
void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}
void build_maxheap(int *a,int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a,i,n);
    }
}
using namespace std;
int main()
{
    int n,i;
    cin >>  n;
    int arr[n+1];
    for(i=1;i<=n;i++)
        arr[i]=i;
    build_maxheap(arr,n);
    if(n%2==0)
    for(i=1;i<=n;i+=2)
        if(arr[2*1]>arr[2*i+1]) swap(arr[2*i+1],arr[2*i]); 
    for(i=1;i<=n;i++)
        cout << arr[i] << " ";
    return 0;
}