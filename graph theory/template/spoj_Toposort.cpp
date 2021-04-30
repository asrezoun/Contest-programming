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
vector<int>gr[10005];
int inDeg[10005];
vector<int>res;
bool topo(int n)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<=n;i++)
        {
            if(inDeg[i]==0)
                pq.push(i);
        }
    while(!pq.empty())
        {
            int node = pq.top();
            res.push_back(node);
            pq.pop();

            for(int child: gr[node])
                {
                    inDeg[child]--;
                    if(inDeg[child]==0)
                        pq.push(child);
                }
        }
    return res.size()==n;
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,x,y;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            gr[x].pb(y);
            inDeg[y]++;
        }

    if(!topo(n))
        {
            cout<<"Sandro fails."<<"\n";
        }
    else
    {
        for(int node : res)
            {
                cout<<node<<" ";
            }
    }
    
    return 0;
}
