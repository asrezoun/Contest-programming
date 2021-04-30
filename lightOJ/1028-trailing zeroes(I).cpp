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
#include<queue>

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
#define mx 1000005
vector<int>primes;
bitset<mx>b;

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
        primes.push_back(2);
        for(int i=3;i<mx;i+=2)
            {
                if(b[i]==0)
                    primes.push_back(i);
            }
        // for(int i=0;i<100;i++)
        //     cout<<primes[i]<<" ";
    }
ll calculate(ll num)
    {
        ll ans=1;
        ll root = sqrt(num);
        for(int i=0; i<primes.size() && primes[i]<=root;i++)
            {
                ll cnt=0;
                if(num==1 || num==0)
                    break;
                if(num%primes[i]==0)
                    {
                        
                        while(num%primes[i]==0)
                            {
                                cnt++;
                                num/=primes[i];
                            }
                        ans *= (cnt+1);
                    }
            }
        if(num !=1)
            ans *= 2; ///prime no beyond 10^6 so it remains undivided. and prime no has two divisors
        return ans;
    }
    

int main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    // //freopen( "input.txt" , "r" , stdin );
    // //freopen( "output.txt" , "w" , stdout );
    // #endif
    sieve();
    int t;
    cin>>t; 
    for(int tc=1;tc<=t;tc++)
        {
            ll base;
            cin>>base;
            cout<<"Case "<<tc<<": ";
            cout<<calculate(base)-1<<"\n";
        }

    return 0;
}
