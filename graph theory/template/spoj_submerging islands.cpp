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
#define mx 10005
vector<int>gr[mx];
bool vis[mx];
int in[mx],low[mx];
int timer=0;
set<int>ap;

void dfs(int node, int parent=-1)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    int childrens =0;
    for(int child: gr[node])
        {
            if(child == parent)
                continue;

            if(vis[child])
                low[node] = min(low[node],in[child]);
            else
            {
                dfs(child,node);
                low[node]= min(low[node],low[child]);

                if(in[node]<=low[child] && parent != -1)
                    ap.insert(node);
                childrens++;

            }
            
        }
        if(parent==-1 && childrens>=2)
            ap.insert(node);
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,x,y;
    while(1)
    {
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        
        for(int i=1;i<=n;i++)
            gr[i].clear(),vis[i]=0;
        ///in low will overwrite so no need to clear;
        ap.clear();timer=0;

        for(int i=1;i<=m;i++)
            {
                cin>>x>>y;
                gr[x].pb(y);
                gr[y].pb(x);
            }
        for(int i=1;i<=n;i++)
            if(!vis[i])
                dfs(i);
        cout<<ap.size()<<"\n";
    }

    return 0;
}
