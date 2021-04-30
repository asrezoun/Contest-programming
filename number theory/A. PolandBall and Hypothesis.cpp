#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
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
#define mx 1000001
bitset<mx>isPrime;

void sieve()
    {
        isPrime[0]=isPrime[1]=1;
        for(int i=2;i*i<mx;i++)
            {
                if(isPrime[i]==0)
                    {
                        for(int j=i*i;j<mx;j+=i)
                            isPrime[j]=1;
                    }
            }
    }

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll n,m=1;
    cin>>n;
    sieve();
    for(int i=1;i<=1000;i++)
        {
            ll temp = n*i*1ll+1;
            if(isPrime[temp]==1)
                {
                    cout<<i<<"\n";
                    return 0;
                }

        }

    return 0;
}
