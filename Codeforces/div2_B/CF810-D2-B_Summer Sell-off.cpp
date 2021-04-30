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
inline bool compare(pll p1,pll p2)
    {
        return p2.first<p1.first;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,f;
    cin>>n>>f;
    vector<pii>v;
    vector<pii>forSort;
    ll x,y;
    for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
            int temp = min(2*x,y)-min(x,y);
            forSort.pb(mp(temp,i));
        }
    sort(forSort.begin(),forSort.end(),compare);
    for(int i=0;i<f;i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
            int index = forSort[i].second;
            v[index].first *=2;
        }
    ll sum=0;
        for(int i=0;i<n;i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
            //v[i].first *=2;
            sum+=min(v[i].first,v[i].second);
        }
    cout<<sum<<"\n";

    return 0;
}
