#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>

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
ull fastexpo(ull power)
{
    ull ans= 1ull,base = 2ull;
    while(power)
        {
            if(power & 1)
                ans = ans *base;
            base = base * base;
            power = power>>1;

        }
        return ans;
}

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ull digits,ans=0ull;
    cin>>digits;

    while(digits)
        {
            ans += fastexpo(digits);
            --digits;
        }
    cout<<ans<<"\n";

    return 0;
}
