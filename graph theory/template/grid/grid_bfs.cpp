#include<bits/stdc++.h>

using namespace std;
int n,m;
int ar[1001][1001];
bool vis[1001][1001];
int dis[1001][1001];

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
bool isValid(int x,int y)
    {
        if(x<1 || x>n || y<1 || y>m)
            return false;
        if(vis[x][y]==1)
            return false;
        return true;
    }
void bfs(int x, int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    int curx,cury;
    vis[x][y]=1;
    dis[x][y]=0;

    while(!q.empty())
        {
            curx = q.front().first;
            cury = q.front().second;
            q.pop();

            for(int i=0;i<4;i++)
                {
                    int tempx = curx+dx[i];
                    int tempy = cury+dy[i];
                   if(isValid(tempx,tempy))
                        {
                            vis[tempx][tempy]=1;
                            dis[tempx][tempy]= dis[curx][cury]+1;
                            q.push({tempx,tempy});
                        } 
                }
        }
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cout<<dis[i][j]<<" ";

            cout<<"\n";
        }


}
int main()
{
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    bfs(x,y);
}