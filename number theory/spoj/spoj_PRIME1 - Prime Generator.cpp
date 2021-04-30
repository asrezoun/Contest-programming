#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<cmath>
#include<bitset>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mx 100001
bitset<mx>b;
vector<int>primes;
void sieve()
{
    for(int i=3;i<mx;i+=2)
        {
            if(b[i]==0)///means prime
                {
                    for(int j=i+i;j<mx;j+=i)
                        b[j]=1;
                }
        }
    primes.pb(2);
    for(int i=3;i<mx;i+=2)
            if(b[i]==0)
                primes.pb(i);
}
void segmentedSieve(ll l,ll r)
    {
        bool isPrime[r-l+1];
        for(int i=0;i<r-l+1;i++)
            isPrime[i]=true;

        if(l==1)
            isPrime[0]=false;

        ///segment starts
        for(int i=0;primes[i]*primes[i]<=r;i++)
            {
                ll curPrime = primes[i];
                ll base = curPrime*curPrime;

                if(base<l)
                    base = ((l+curPrime-1)/curPrime)*curPrime;
                for(ll j=base;j<=r;j+=curPrime)
                    {
                        isPrime[j-l]=false;
                    }
            }
        for(int i=0;i<r-l+1;i++)
            if(isPrime[i]==true)
                cout<<l+i<<"\n";
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif

    sieve();
    //segmentedSieve(11,21);
    int t;
    cin>>t;
    while(t--)
        {
            ll l,r;
            cin>>l>>r;
            segmentedSieve(l,r);
            cout<<"\n";
        }
    /*
    cout<<primes.size()<<"\n";
    for(int i=0;i<2000;i++)
        cout<<primes[i]<<" ";
    */
    return 0;
}
