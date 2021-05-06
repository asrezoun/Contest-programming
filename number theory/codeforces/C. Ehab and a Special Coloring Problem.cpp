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
#define mx 100005
int ar[mx];

void sieve()
    {
        int cn=0;
        for(int i=2;i<mx;i++)
            {
                if(ar[i]==0)
                    {
                       cn++;
                       ar[i]=cn;
                       for(int j=i+i;j<mx;j+=i)
                            {
                                ar[j]=cn;
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
    int n;
    cin>>n;
    sieve();
    for(int i=2;i<=n;i++)
        cout<<ar[i]<<" ";

    return 0;
}
