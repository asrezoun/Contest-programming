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
ll digisum(ll n)
    {
        ll res=0;
        while(n)
            {
                res += n%10;
                n/=10;
            }
        return res;
    }
ll fact(ll n)
    {
        ll res=0;
        for(ll i=2;i*i*1ll<=n;i++)
            {
                if(n%i==0)///means i is prime divisonr
                    {

                        while(n%i==0)
                            {
                            res+=digisum(i);
                            n/=i;
                            }
                    }
            }
            if(n>1)
                {
                   res+=digisum(n);
                }
            return res;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll n;
    cin>>n;
   // string s = to_string(n);
    //cout<<s;
    ll res1=0;
    res1 = digisum(n);
    //cout<<res1<<"\n";
    //cout<<fact(n)<<"\n";
    if(res1==fact(n))
        cout<<"1\n";
    else
        cout<<"0\n";

    return 0;
}
