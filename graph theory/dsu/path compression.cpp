#include<bits/stdc++.h>
using namespace std;
int par[1000];

int pathComp(int x)
{
    if(par[x]==x) /// can be done using the negative value
        return x;
    else
    {
        int n = pathComp(par[x]);
        par[x] = n;
        return n;
    }
    
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            par[y]=x;
        }
    pathComp(4);
    for(int i=1;i<=n;i++)
        cout<<par[i]<<" ";
}