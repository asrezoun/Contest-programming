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
char ar[31][31];
bool vis[31][31];
int dis[31][31];

int n;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isValid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>n)
        return false;
    if(vis[x][y]==1 || ar[x][y]=='T')
        return false;
    return true;
}

void bfs(int sx,int sy)
{
    queue<pii>q;
    q.push({sx,sy});
    vis[sx][sy]=1;
    dis[sx][sy]=0;

    while(!q.empty())
        {
            int x,y;
            x= q.front().first;
            y= q.front().second;
            q.pop();

            for(int i=0;i<4;i++)
                {
                    int tempx = x+dx[i];
                    int tempy = y+dy[i];
                    if(isValid(tempx,tempy))
                        {
                            vis[tempx][tempy]=1;
                            dis[tempx][tempy] = dis[x][y]+1;
                            q.push({x+dx[i],y+dy[i]});
                        }
                }
        }
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    cin>>n;
    char sx,sy,tx,ty;

    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                { cin>>ar[i][j];
                if(ar[i][j]=='S')
                    sx=i,sy=j;
                if(ar[i][j]=='E')
                    tx=i,ty=j;
                }

        }
    bfs(sx,sy);
    cout<<dis[tx][ty]<<"\n";
    

    return 0;
}
