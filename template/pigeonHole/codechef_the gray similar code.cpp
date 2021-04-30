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

#define ll unsigned long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    ll n,xOr;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
        cin>>ar[i];
    if(n>=130)///codechef editorial
        {
            cout<<"Yes\n";
            return 0;
        }
    for(ll i=0;i<n-3;i++)
        {
            for(ll j=i+1;j<n-2;j++)
                {
                    for(ll k=j+1;k<n-1;k++)
                        {
                            xOr = ar[i]^ar[j]^ar[k];
                            for(ll x=k+1;x<n;x++)
                                {
                                    if(ar[x]==xOr)
                                        {
                                            cout<<"Yes\n";
                                            return 0;
                                        }
                                }
                        }
                }
        }
        cout<<"No\n";

    return 0;
}
