#include<bits/stdc++.h>
using namespace std;
int ar[1000];

int findParent(int x)
{
    if(ar[x]<0)
        return x;
    else 
        return findParent(ar[x]);
}
void unionOf(int x, int y)
{
    ar[x] += ar[y];
    ar[y] = x;
}
int main()
{
    int n,m,x,y;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        {
            ar[i]=-1;
        }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        x = findParent(x);
        y = findParent(y);

        if(x != y)
            unionOf(x,y);
        
    }
    int res=1;
    for(int i=1;i<=n;i++)
        if(ar[i]<0)
        res *= abs(ar[i]);
    cout<<res<<" ";

}
/*
8 5
1 2
2 3
1 3
4 5
5 3*/