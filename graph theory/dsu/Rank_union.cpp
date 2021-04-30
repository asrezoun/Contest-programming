#include<bits/stdc++.h>
using namespace std;

int ar[1000];int rnk[1000];

int findfun(int a)
{
    if(ar[a]<0)
        return a;
    else
    {
        int x = findfun(ar[a]);
        ar[a]=x;
        return x;
    }
    

}

void unionof(int a, int b)
{
    a = findfun(a);
    b = findfun(b);

    if(a==b)
        return;
    else
    {
        if(rnk[a]>rnk[b]) ///higher rank code
            {
                ar[b]=a;
                rnk[a]+=rnk[b];
            }
        else
        {
            ar[a]=b;
            rnk[b]+=rnk[a];
        }
        
    }
    
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        {
            ar[i]=-1;
            rnk[i]=1;
        }
    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            unionof(x,y);
        }
}