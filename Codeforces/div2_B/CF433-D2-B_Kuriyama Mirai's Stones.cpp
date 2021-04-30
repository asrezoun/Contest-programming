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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif

    int n,m,t,l,r;
    cin>>n;
    ll ar[n+1],br[n+1],x;
    ar[0]=br[0]=0;
    for(int i=1;i<=n;i++)
        {
            cin>>x;
            ar[i]=br[i]=x;

        }
    ///input done
    sort(br,br+n+1);
    for(int i=1;i<=n;i++)
        {
            ar[i]+=ar[i-1];
            br[i]+=br[i-1];
        }
    ///prefix done
    cin>>m;
    while(m--)
        {
            cin>>t>>l>>r;
            ll temp;
            if(t==1)
                    temp= ar[r]-ar[l-1];
            else if(t==2)
                temp = br[r]-br[l-1];

            cout<<temp<<"\n";

        }
    return 0;
}
