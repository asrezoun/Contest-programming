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
#include<unordered_map>

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
unordered_map<ll,ll>cal;
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll n,m,x;
    cin>>n>>m;
    vector<ll> ar(n+1);
    
    ar[0]=0;
    for(int i=1;i<=n;i++)
        {
            cin>>x;
            ar[i]= x;
        }
    //auto it = max_element(ar.begin(),ar.end());
    
    for(int i=1;i<=n;i++)
        {
            ll temp = ar[i];
            cal[temp]++;
            auto it = max_element(cal.begin(),cal.end());
            cout<<it->first<<" "<<it->second<<"\n";
        }

    return 0;
}
