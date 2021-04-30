#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>

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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll n,m,vasya=0,petya=0;
    cin>>n;

    ll ar[n+1],indices[n+1];
    for(ll i=1;i<=n;i++)
        {
            cin>>ar[i];
            indices[ar[i]]=i;
        }


    cin>>m;
    ll queries[m+1];
    for(ll i=1;i<=m;i++)
        cin>>queries[i];

    ///calculate
    for(int i=1;i<=m;i++)
        {
            ll x = indices[queries[i]];
            vasya += x;
            petya += n-x+1;
        }
    cout<<vasya<<" "<<petya<<"\n";
    return 0;
}
