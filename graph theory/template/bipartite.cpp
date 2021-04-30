#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int vis[1000];
int color[1000];
bool dfs(int node,int col)
    {
        vis[node]=1;
        color[node] = col;
        for(int child:gr[node])
            {
                if (!vis[child])
                {
                    if(dfs(child,col^1)==false)
                    return false;
                }
                
                
                else ///means already visited
                {
                    if(color[node]==color[child])
                        return false;
                }
                
            }
        return true;
    }
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
    if(dfs(1,1))
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}