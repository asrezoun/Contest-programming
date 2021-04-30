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
int vis[mx];
int dis[mx];
void bfs(int node)
    {
        queue<int>q;
        q.push(node);
        vis[node]=1;
        dis[node]=0;

        while(!q.empty())
            {
                int curNode =  q.front();
                q.pop();
                for(int child:gr[curNode])
                    {
                        if(!vis[child])
                        {
                        vis[child]=1;
                        dis[child]= dis[curNode]+1;
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
    int t,n,m,a,b;
    cin>>t;
    while(t--)
        {
            cin>>n>>m;
            for(int i=1;i<=n;i++)
                {
                    gr[i].clear();
                    vis[i]=0;
                    dis[i]=0;
                }
            ///cleared
            for(int i=1;i<=m;i++)
                {
                    cin>>a>>b;
                    gr[a].push_back(b);
                    gr[b].push_back(a);
                }
            bfs(1);

            cout<<dis[n]<<"\n";
        }

    return 0;
}
