#include<bits/stdc++.h>
using namespace std;
queue<int>q;
vector<int>gr[1000];
int vis[1000];
int dis[1000];
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
    q.push(3);
    vis[3]=1;
    dis[3]=0;
    while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(int child:gr[node])
                {
                    if(!vis[child])
                        {
                            q.push(child);
                            vis[child]=1;
                            dis[child]= dis[node]+1;
                        }
                }
        }
    for(int i=1;i<=n;i++)
        {
            cout<<i<<" ==> "<<dis[i]<<"\n";
        }
}