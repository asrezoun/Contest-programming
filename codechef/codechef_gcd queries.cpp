#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
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
int ar[mx],pref[mx],suf[mx];
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ///1 based index
    int t;
    cin>>t;
    while(t--)
        {
            int n,q,l,r;
            cin>>n>>q;
            for(int i=1;i<=n;i++)
                cin>>ar[i];
            pref[0]=suf[n+1]=0;///they are already 0,, did it for understanding
            ///calculate the prefix array
            for(int i=1;i<=n;i++)
                pref[i] = gcd(ar[i],pref[i-1]);///forward
            for(int i=n;i>=1;i--)
                suf[i]= gcd(ar[i],suf[i+1]); ///backward

            ///precomputing done
            ///why this precomputing>>> look t is 10^5 and also is q if operation insid q is not ~O(1) then it is TLE
            ///now just show the results
            while(q--)
                {
                    cin>>l>>r;
                    cout<<gcd(pref[l-1],suf[r+1])<<"\n";
                }
        }

    return 0;
}
