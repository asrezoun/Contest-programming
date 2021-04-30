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
#define mx 1000001
ll mul[mx];
ll freq[mx];
ll nCthree(ll n)
    {
        //ll ans;
        if(n<3)
            return 0;
        ll ans = (n*(n-1)*(n-2)*1ll)/6;
        return ans;
    }

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>x;
            freq[x]++;

        }
        ///multiple array so that, we can calculate gcd
    for(int i=1;i<mx;i++)
        {
            for(int j=i;j<mx;j+=i)
                {
                    mul[i]+=freq[j];
                }
            mul[i]=nCthree(mul[i]); ///form the triplets from the multiple numbers
        }

    for(int i=mx-1;i>=1;i--) /// subtract all the multiples of gcd to obtain the optimal gcd
        {
            for(int j=2*i;j<mx;j+=i)
                {
                    mul[i] -= mul[j];
                }
        }
    cout<<mul[1]<<"\n";
    return 0;
}
