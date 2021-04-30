#include<bits/stdc++.h>
using namespace std;
#define mx 100001
vector<int>gr[mx];
int visited[mx];
int dis[mx];
bool flag = true;
void sssp(int node,int parentdis)
    {
        visited[node]=1;
        if(!flag)
        dis[node]=parentdis+1;
        flag = false;
        for(int child:gr[node])
            {
                if(!visited[child])
                    sssp(child,dis[node]);
            }
    }
int main()
{
    int n,m,a,b,start;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
    cin>>start;
    sssp(start,0);
    for(int i=1;i<=n;i++)
        cout<<i<<" -->"<<dis[i]<<"\n";
    

}
