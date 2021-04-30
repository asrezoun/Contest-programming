#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
int arr[mx];

void ETFsieve()
    {
        for(int i=1;i<mx;i++)
            arr[i]=i; ///initalizing with own value|| eqn = n* {(i1-1)/i1}* {(i2-1)/i2} ///details code n code

        ///now do sieve and remember if value==index then it is prime
        for(int i=2;i<mx;i++)
            {
                if(arr[i]==i)
                    {
                        for(int j=i;j<mx;j+=i) ///operate on multiple of i
                            {
                                arr[j]/=i;
                                arr[j] *= (i-1);
                            }
                    }
            }
    }
int main()
{
    int n,t;
    cin>>t;
    ETFsieve();
    while(t--)
    {cin>>n;
    cout<<arr[n]<<"\n";
    }
}
