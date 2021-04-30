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
#define mx 1000001
vector<int>gr[mx];
int vis[mx];
int dis[mx];
int cnt[mx];

void bfs(int node)
    {
        vis[node]=1;
        dis[node]=0;
        cnt[dis[node]]=0;
        queue<int>q;
        q.push(node);

        while(!q.empty())
            {
                int curNode = q.front();
                q.pop();
                for(int child: gr[curNode])
                    {
                        if(!vis[child])
                            {
                                vis[child]=1;
                                dis[child]= dis[curNode]+1;
                                cnt[dis[child]]++;
                                q.push(child);
                            }
                    }
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,q,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
        }
    cin>>q;
    while(q--)
        {
            int src,ds;
            cin>>src>>ds;
            for(int i=0;i<=n;i++)
                dis[i]=0,vis[i]=0,cnt[i]=0;
            bfs(src);

            cout<<cnt[ds]<<"\n";
        }
    return 0;
}
