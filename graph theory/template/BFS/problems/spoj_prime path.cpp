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
#define mx 100005
vector<int>gr[mx];
int vis[mx];
int dist[mx];
vector<int>primes;
bool isPrime(int num)
    {
        for(int i=2;i*i<=num;i++)
            {
                if(num%i==0)
                    return false;
            }
        return true;
    }
bool isValid(int x,int y)
    {
        int cnt=0;
        while(x)
        {
        if(x%10!=y%10)
            cnt++;
         x/=10;y/=10;
        }
    if(cnt==1)
        return true;
    else 
        return false;
    }
void makeInput()
{
    for(int i=1000;i<=9999;i++)
        if(isPrime(i))
            primes.pb(i);
    for(int i=0;i<primes.size();i++)
        {
            for(int j=i+1;j<primes.size();j++)
                {
                    int x= primes[i];
                    int y= primes[j];
                    if(isValid(x,y))
                        {
                            gr[x].pb(y);
                            gr[y].pb(x);
                        }
                }
        }

}
void bfs(int node)
    {
        queue<int>q;
        vis[node]=1;
        dist[node]=0;

        q.push(node);

        while(!q.empty())
            {
                int curNode = q.front();
                q.pop();

                for(int child: gr[curNode])
                    {
                        if(!vis[child])
                            {
                                vis[child]=1;
                                dist[child]= dist[curNode]+1;
                                q.push(child);
                            }
                    }
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t,a,b;
    cin>>t;
    makeInput();
    while(t--)
        {
            cin>>a>>b;

            for(int i=1000;i<=9999;i++)
                {
                    dist[i]=-1,vis[i]=0;
                }
            bfs(a);
            if(dist[b]==-1)
                cout<<"Impossible\n";
            else
            {
                    cout<<dist[b]<<"\n";
            }
            
            
        }

    return 0;
}
