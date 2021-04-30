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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    while(t--)
        {
            ll n,k ,ans;
            cin>>n>>k;
            ans=n;
            /// a packages with b shovels in 1 of it .. N= a*b;
            ///we need to find minimum packages means maximum shovels :)
            for(ll i=1;i*i<=n;i++)/// a and b are divisors of n and one of them must be in range root n
                {
                    if(n%i==0)
                        {
                            if(i<=k)
                                ans=min(ans,n/i);
                            if(n/i<=k)///another multiple
                                ans =min(ans,i);
                        }

                }
                cout<<ans<<"\n";


        }

    return 0;
}
