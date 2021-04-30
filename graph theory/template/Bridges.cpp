#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int vis[1000];
int in[1000],low[1000];
int timer;
bool dfs(int node,int parent)
    {
       vis[node]=1;
       in[node]=low[node]=timer;
       timer++;

       for(int child: gr[node])
        {
            if(child == parent)
                continue;
            if(vis[child]==1) // vis but not parent means backedge
                low[node]= min(low[node],in[child]);
            else
            {
                /* not visited */
                dfs(child,node);
                if(low[child]>in[node])
                    cout<<node<<" -- "<<child<<" is bridge\n";
                low[node]= min(low[node],low[child]);
            }
            

        }
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
    dfs(1,-1);

}