#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
typedef long long ll;
bitset<mx>b;
vector<int>primes;

void sieve()
    {
        primes.push_back(2);

        for(int i=3;i<mx;i+=2)
            {
                if(b[i]==0)
                    {
                        for(int j=i+i;j<mx;j+=i) ///i*i results in segmantation error cz?? in the first loop see its i<mx then big
                                b[j]=1;  ///big i will result in i*i seg error .. if upper loop was root n, then it wont.. got it??
                    }
            }
        for(int i=3;i<mx;i+=2)
            {
                if(b[i]==0)
                    primes.push_back(i);
            }
        /*
        for(int i=0;i<10;i++)
            cout<<primes[i]<<" ";
        */
    }
void segmented_sieve(ll l,ll r)
    {
        sieve();
        //bitset<r-l+1>isPrime;
        bool isPrime[r-l+1];
        for(int i=0;i<r-l+1;i++)
            isPrime[i]=true;

        if(l==1)
            isPrime[0]=false; ///not prime

        ///segment starts
        ///theory is to cut the composites using the previously determined primes
        for(int i=0; primes[i]*primes[i]*1ll<=r;i++)
            {
                ll curPrime = primes[i];
                ll base = curPrime*curPrime;

                if(base<l)
                    base = ((l+curPrime-1)/curPrime)*curPrime;/// main challenge, where to start

                for(ll j=base;j<=r;j+=curPrime)
                    isPrime[j-l]=false;
            }

        for(int i=0;i<r-l+1;i++)
            {
                if(isPrime[i])
                    cout<<i+l<<" ";
            }

    }
int main()
{
    segmented_sieve(29,70);

}
