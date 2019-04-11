#include<iostream>
using namespace std;
int main()
{
    int i,t,count3,length;
    long long int n;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        if(n<333)
            cout << 333 << endl;
        else{
            n++;
            for(i=n,count3=0;i;i/=10)
                    if(i%10==3) count3++;
            while(count3<3)
            {
                n = n + 1;
                for(i=n,count3=0;i;i/=10)
                    if(i%10==3) count3++;
                if(count3>=3) break;
            }
            cout << n << endl;
        }
    }
    return 0;
}
