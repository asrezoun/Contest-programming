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
#define mx 1000001
ll gcd(ll a, ll b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll a,b;
    cin>>a>>b;
    ll gc= gcd(a,b);
    vector<ll>v;
    for(ll i=1;i*i<=gc;i++)
        {
            if(gc%i==0)
                {
                    v.pb(i);
                    ll temp= gc/i;
                    if(temp*temp!=gc)
                        v.pb(temp);
                }
        }
    int t;
    cin>>t;
    while(t--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans=-1;
                for(ll i=0;i<v.size();i++)
                    {
                        if(v[i]>=l && v[i]<=r)
                            ans = max(ans,v[i]);
                    }
                cout<<ans<<"\n";
        }

    return 0;
}
