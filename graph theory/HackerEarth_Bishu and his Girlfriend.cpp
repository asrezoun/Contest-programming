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
#define mx 1005
vector<int>gr[mx];
int visited[mx];
int dis[mx];
bool flag=true;
void dfs(int node,int parDis)
    {
        visited[node]=1;
        if(!flag)
            dis[node]=parDis+1;
        flag=false;
        for(int child:gr[node])
            {
                if(!visited[child])
                    dfs(child,dis[node]);
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,a,b,q;
    vector<pii>v;
    cin>>n;
    for(int i=1;i<=n-1;i++)
        {
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
        }
    dfs(1,0);
    // for(int i=1;i<=n;i++)
    //     {
    //         cout<<i<<"--> "<<dis[i]<<"\n";
    //     }
    
    cin>>q;
    for(int i=1;i<=q;i++)
        {
            cin>>a;
            v.pb(mp(dis[a],a));
        }
    sort(v.begin(),v.end());
    int value =v[0].first;
    int gf=v[0].second;
    int i=1;
    while(v[i].first==value)
        {
            gf=min(gf,v[i].second);
            i++;
        }
    cout<<gf<<"\n";
    return 0;
}
