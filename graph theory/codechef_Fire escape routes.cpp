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
#define mx 100005
vector<int>gr[mx];
int vis[mx];
int people;
void dfs(int node)
    {
        vis[node]=1;
        people++;
        for(int child:gr[node])
            {
                if(!vis[child])
                    { 
                        dfs(child);
                    }

            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,a,b,t;
    cin>>t;
    while(t--)
        {
            cin>>n>>m;
            for(int i=1;i<=n;i++)
                {
                    vis[i]=0;
                    gr[i].clear();
                }
            ///cleared
            for(int i=1;i<=m;i++)
                {
                    cin>>a>>b;
                    gr[a].push_back(b);
                    gr[b].push_back(a);
                }
            int cc=0;
            ll res=1;
            for(int i=1;i<=n;i++)
                {
                    if(!vis[i])
                        {
                            people=0;
                            dfs(i);
                            cc++;
                            res = (res*people*1ll)%mod;
                        }
                    
                }
            cout<<cc<<" "<<res<<"\n";
        }

    return 0;
}
