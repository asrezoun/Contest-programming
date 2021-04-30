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
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    while(t--)
        {
            vector<ll>ele;
            ll x;
            for(int i=1;i<=3;i++)
                {
                    cin>>x;
                    ele.pb(x);
                }
            ll maxi= *max_element(ele.begin(),ele.end());
            ll mini= *min_element(ele.begin(),ele.end());
            int cnt=0;
            for(int i=0;i<3;i++)
                {
                    if(ele[i]==maxi)
                        cnt++;
                }
            if(cnt<2)
                cout<<"NO\n";
            else
                {
                    cout<<"YES\n";
                    cout<<mini<<" "<<mini<<" "<<maxi<<"\n";
                }
        }

    return 0;
}
