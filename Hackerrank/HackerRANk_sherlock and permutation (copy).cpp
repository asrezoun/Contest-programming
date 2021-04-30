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
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

ll fact(ll x)
    {
        ll ans =1;
        for(ll i=1;i<=x;i++)
            {
                ans = (ans*i) % mod;
            }
        return ans;

    }
ll binary_exp(ll base,ll power)
    {
        if(power==0)
            return 1;
        else if(power==1)
            return base % mod;
        else
            {
                ll temp = binary_exp(base,power/2);
                temp  = (temp * temp) % mod; /// (x`n/2 * x`n/2)%mod

                if(power %2 ==0)
                    return temp;
                else
                    return ((base%mod) * temp)%mod; /// x * temp, as power is odd
            }
    }

int main() {
    fastio;
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    int t;
    cin>>t;

    ll n,m;
///go to code n code video binomial coefficient for more efficient approach
    while(t--)
        {
            cin>>n>>m;

            ll top,bottom1,bottom2,temp,bottom,result;

            ///calculate all the fact [(n+m-1)!/(m-1)!*n!] % mod
            top = fact(n+m-1);
            bottom1 =fact(n);
            bottom2 = fact(m-1);

            ///calculate the bottom
            temp = (bottom1 * bottom2) %mod;

            /// power calc
            bottom = binary_exp(temp,mod-2);
            bottom %=mod;
            ///final result
            result = (top * bottom) % mod;

            cout<<result<<"\n";

        }

    return 0;
}
