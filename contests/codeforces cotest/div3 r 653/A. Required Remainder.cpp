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
ll gcd(ll a,ll b)
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
    //cout<<gcd(9,12);
    int t;
    cin>>t;

    while(t--)
        {
            ll x,y,n;
            cin>>x>>y>>n;
            if(n%x==y)
                cout<<n<<"\n";
            else
                {
                    ll temp = n%x;
                    cout<<n-abs(temp-y)<<"\n";
                }
        }
    return 0;
}
