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
vector<int>gr[10005];
int vis[10005];
void dfs(int node)
    {
        vis[node]=1;
        for(int child: gr[node])
            {
                if(!vis[child])
                    dfs(child);
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
        }
    ///check connected components
    int cc=0;   
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            {
                dfs(i);
                cc++;
            }
    }
    //cout<<cc<<"\n";
    if(cc == 1 && m == n-1)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    return 0;
}
