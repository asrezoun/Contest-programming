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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int a,b,c;
    cin>>a>>b>>c;

    int mini = min(a,b);
    int ma = max(a,b);

    while(c!=0 && mini<ma)
        {
            mini++;
            c--;
            if(c==0)
                break;
        }
    int ans = 2*mini;
    if(c>0)
        ans += c;
    if(ans &1)
        ans--;
    cout<<ans<<"\n";

    return 0;
}
