#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
int ar[mx];
///they said it is logn solution :(
void primeFactorSieve()
    {
        ///do sieve and place the divisors
        ar[0]=ar[1]=1;
        for(int i=2;i<mx;i++) ///not i*i cz we need all the values and their min divisors
            {
                if(ar[i]==0)
                    for(int j=i;j<mx;j+=i)
                        {
                            if(ar[j]==0)
                                ar[j]=i;
                        }
            }///explanation code n code video
            /// marked every no with their lowest divisors including the prime .. ex:: 5 is a prime so it is marked by 5 :p
    }
void factors(int n)
    {
        int temp;
        while(n>1)
            {
                temp=ar[n];
                cout<<temp<<" ";///go to n print its lowest divisor and divide it by that divisor and continue the loop :p
                n/=temp;

            }
    }
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    primeFactorSieve();
    factors(n);
    cout<<"\n";
    }
}
