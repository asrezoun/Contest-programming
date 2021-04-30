#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int vis[1000];
int subTree[1000];
int dfs(int node)
    {
        vis[node]=1;
        int curSize = 1;
        for(int child: gr[node])
            {
                if(!vis[child])
                 curSize += dfs(child);
            }
        subTree[node]= curSize;
        return curSize;

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
        dfs(1);
        cout<<"Subtrees of each node:\n";
        for(int i=1;i<=n;i++)
            {
                cout<<i<<" ==> "<<subTree[i]<<"\n";
            }
    }