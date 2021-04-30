#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int vis[1000];
int parent[1000];

bool dfs(int node,int parents)
    {
        vis[node]=1;
        parent[node]= parents;

        for(int child:gr[node])
            {
                if(!vis[child])
                    {
                        bool res = dfs(child,node);
                        if(res==true)
                            return true;//contains cycle
                    }
                else
                {
                    if(parent[node]!=child)
                        return true;
                }
                
            }
        return false;
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
    if(dfs(1,-1))
        cout<<"cycle exists";
    else 
        cout<<"no cycle";

}