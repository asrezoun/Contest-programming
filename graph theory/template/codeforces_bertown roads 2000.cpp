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
#define mx 100005

vector<int>gr[mx];
vector<pii>edges;
bool vis[mx],isBridge;
int in[mx],low[mx];
int timer=0;

void dfs(int node, int parent)
{
    vis[node]=1;
    in[node]=low[node]=timer++;

    for(int child: gr[node])
        {
            if(child == parent) continue;

            if(vis[child])
                {
                    low[node] = min(low[node],in[child]);
                    if(in[node]>in[child])
                        edges.pb({node,child});
                }
            else
            {
                dfs(child,node);
                low[node]= min(low[node],low[child]);
                if(in[node]<low[child])
                    {
                        ///means bridge
                        isBridge = true;
                        return;
                    }
                edges.pb({node,child});
            }
            
        }
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
    dfs(1,-1);

    if(isBridge)
        cout<<"0"<<"\n";
    else
    {
        for(int i=0;i<edges.size();i++)
            cout<<edges[i].first<<" "<<edges[i].second<<"\n";
    }
    
    return 0;
}
