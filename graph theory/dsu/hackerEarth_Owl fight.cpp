#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<cmath>
#include<bitset>
#include<queue>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mx 1000001
int ar[mx];

int find(int a)
{
    if(ar[a]<0)
        return a;

    else
    {
        int x = find(ar[a]);
        ar[a]=x;
        return x;
    }
    
}
int unionOf(int a, int b)
{
    ar[a]= min(ar[a],ar[b]);
    ar[b]=a;
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    
    int q,n,m,a,b;
    
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        ar[i]=-i;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        a = find(a);b= find(b);
        if(a!=b)
            unionOf(a,b);       
    }
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int par_x = find(x); int par_y = find(y); 
        if(par_x==par_y)
         cout<<"TIE\n";
        else
        {
            if(ar[par_x]< ar[par_y])
                cout<<x<<"\n";
            else
            {
                cout<<y<<"\n";
            }
            
        }
        

    }
    return 0;
}
