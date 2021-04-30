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
#define mx 10005
vector<int>gr[mx];
int vis[mx];
int maxDis,maxNode;
void dfs(int node,int dis)
    {
        vis[node]=1;
        if(dis>maxDis)
            {
                maxDis = dis;
                maxNode = node;
            }
        for(int child: gr[node])
            {
                if(!vis[child])
                    dfs(child,dis+1);
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
        {
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
        }
    ///input done
    maxDis = -1;
    dfs(1,0);
    ///first node founded
    for(int i=1;i<=n;i++)
        vis[i]=0;
    maxDis =-1;
    dfs(maxNode,0);
    cout<<maxDis<<"\n";

    return 0;
}
