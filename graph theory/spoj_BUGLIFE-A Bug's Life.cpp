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
vector<int>gr[2005];
int vis[2005];
int color[2005];
bool bts(int node,int col)
    {
        vis[node]=1;
        color[node]=col;
        for(int child:gr[node])
            {
                if(!vis[child])
                    {
                        bool res= bts(child,col^1);
                        if(!res)///res is false
                            return false;
                    }
                else///already visited
                {
                        if(color[child]==color[node])
                            return false;
                }
                
            }
            return true;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        int n,m,a,b;
        cin>>n>>m;
        ///clear previous memory
        for(int i=0;i<=n;i++)
            gr[i].clear(),vis[i]=0,color[i]=0;
        ///take input
        for(int i=1;i<=m;i++)
            {
                cin>>a>>b;
                gr[a].pb(b);
                gr[b].pb(a);
            }
        ///input done
        bool flag = true;
        for(int i=1;i<=n;i++)
            {
                if(!vis[i])
                {
                bool res=bts(i,0);
                if(res==false)
                    flag=false;
                }
            }
        cout<<"Scenario #"<<test<<":\n";
        if(flag)
            cout<<"No suspicious bugs found!\n";
        else 
            cout<<"Suspicious bugs found!\n";
    }
    return 0;
}
