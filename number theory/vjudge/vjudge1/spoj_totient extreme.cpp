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
#define mx 10009
ll et[mx];
void etf()
    {
        for(ll i=0;i<mx;i++)
            et[i]=i;
        for(ll i=2;i<mx;i++)
            {
                if(et[i]==i)
                    {
                        for(ll j=i;j<mx;j+=i )
                            {
                                et[j]/=i;
                                et[j]*=(i-1)*1ll;
                            }
                    }
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    etf();
    int t;
    //cout<<et[2]<<" "<<et[3];
    cin>>t;
    
    while(t--)
    {
    ll H=0;
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
        H+=et[i];
    H=H*H;   
    cout<<H<<"\n";
    
    
    }

    return 0;
}
