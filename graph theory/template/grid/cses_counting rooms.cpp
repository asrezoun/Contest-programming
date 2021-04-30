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

char ar[1001][1001];
bool vis[1001][1001];

int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isValid(int x, int y)
{
    if(x<1 || x>n || y<1 || y> m)
        return false;
    if(vis[x][y]==1 || ar[x][y]=='#')
        return false;
    return true;
}
void dfs(int x, int y)
{
    vis[x][y]=1;

    for(int i=0;i<4;i++)
        {
            if(isValid(x+dx[i],y+dy[i]))
                dfs(x+dx[i],y+dy[i]);
        }
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cin>>ar[i][j];
        }
    ///input done
    int cc=0;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                {
                    if(ar[i][j]=='.' && vis[i][j]==0)
                        dfs(i,j),cc++;
                }
        }
    cout<<cc<<"\n";
    return 0;
}
