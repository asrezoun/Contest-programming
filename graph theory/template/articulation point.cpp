#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int in[1000],low[1000];
bool vis[1000];
int timer=0;
set<int>ap;
void dfs(int node,int parent=-1)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    int children=0;
    for(int child: gr[node])
        {
            if(child== parent)
                continue;
            if(vis[child]==1)
                low[node]=  min(in[child],low[node]);
            else
            {
                /* not visited */
                dfs(child,node);
                low[node]=min(low[node],low[child]);

                if(in[node]<=low[child] && parent !=-1)
                    ap.insert(node);
                
                children++;

            }
            
        }
    if(parent==-1 && children>=2)
        ap.insert(node);
}
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
    dfs(1);
    //cout<<ap.size();
    for(auto it= ap.begin();it!=ap.end();it++)
        cout<<*it<<" ";
    
}