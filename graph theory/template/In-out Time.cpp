#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
int vis[1000];
int sTime[1000];
int eTime[1000];
int Time = 1;

void dfs(int node)
    {
        vis[node]=1;
        sTime[node]= Time++;

        ///some work
        for(int child: gr[node])
            {
                if(!vis[child])
                    {
                        dfs(child);
                    }
            }

        eTime[node]= Time++;
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
        for(int i=1;i<=n;i++)
            {
                if(!vis[i])
                    dfs(i);
            }
        for(int i=1;i<=n;i++)
            {
                cout<<i<<"-->"<<sTime[i]<<"/"<<eTime[i]<<"\n";
            }
        return 0;


    }
    ///if a and b form a sub tree then stime[par]<stime[child] && eTime[par]>eTime[child];