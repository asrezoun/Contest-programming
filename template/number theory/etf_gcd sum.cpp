#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
int phi[mx];

void etf_sieve()
    {
        for(int i=0;i<mx;i++)
            phi[i]=i;

        for(int i=2;i<mx;i++)
            {
                if(phi[i]==i)///means prime
                {
                    for(int j=i;j<mx;j+=i)
                        {
                            phi[j]/=i;
                            phi[j]*=(i-1);
                        }
                }

            }

    }

int main()
{
    int t,n;
    cin>>t;
    //cout<<phi[12];
    etf_sieve();
    while(t--)
        {
            cin>>n;
            int result=0;
            for(int i=1;i*i<=n;i++)
                {
                    if(n%i==0)
                        {
                            int d1,d2;
                            d1=i;
                            d2=n/i; ///another multiple above root n
                            result += d1*phi[n/d1];
                            if(d1  != d2)
                            result += d2*phi[n/d2];

                        }
                }
            cout<<result<<"\n";
        }

}
