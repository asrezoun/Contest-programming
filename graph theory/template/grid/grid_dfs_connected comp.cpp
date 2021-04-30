#include<bits/stdc++.h>
using namespace std;
int n,m;
int ar[1001][1001];
bool vis[1001][1001];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1}; 

bool isValid(int x, int y)
    {
        if(x<1 || x>n || y<1 || y>m)
            return false;

        if(vis[x][y]==1 || ar[x][y]==0)
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
int main()
{
    cin>>n>>m;
    int x,y;

    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cin>>ar[i][j];
        }
    int cc=0;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                {
                    if(ar[i][j]==1 && vis[i][j]==0)
                        {cc++;
                        dfs(i,j);}
                }
        }
    cout<<cc<<"\n";
}
/*
6 6
0 0 1 0 1 1
0 1 1 0 0 1
0 1 0 0 0 0
1 0 1 1 0 0
0 0 0 1 0 0
0 1 1 1 1 1
*/