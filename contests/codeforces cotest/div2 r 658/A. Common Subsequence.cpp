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
            vector<int>a,b;
            int n,m,x;
            cin>>n>>m;
            for(int i=0;i<n;i++)
                {
                    cin>>x;
                    a.pb(x);
                }
            for(int j=0;j<m;j++)
                {
                    cin>>x;
                    b.pb(x);
                }
            bool flag = false;
            int val;
            for(int i=0;i<n;i++)
                {
                    auto it = find(b.begin(),b.end(),a[i]);
                    if(it != b.end())
                        {
                            flag = true;
                            val = a[i];
                            break;
                        }
                }
            if(flag)
                {
                    cout<<"YES\n";
                    cout<<"1 "<<val<<"\n";
                }
            else
            {
                    cout<<"NO\n";
            }
            
        }

    return 0;
}
