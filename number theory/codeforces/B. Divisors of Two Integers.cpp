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
#define mx 10005
//int cnt[mx];
inline bool compare(int a,int b)
    {
        return a>b;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,x;
    cin>>n;
    //int ar[n];
    vector<int>p;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            p.pb(x);
        }
    sort(p.begin(),p.end());
    int ans1= p.back();
    for(int i=0;i<p.size()-1;i++)
        {
            if(ans1%p[i]==0 && p[i] != p[i+1] ) ///remove those element which are only divisor of x
                p[i]=0;
        }
    int ans2= *max_element(p.begin(),p.end()-1);
    cout<<ans1<<" "<<ans2<<"\n";

    return 0;
}
