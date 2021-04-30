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
#include<queue>

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
            int n,cnt=0;
            cin>>n;
            int ar[n];
            for(int i=0;i<n;i++)
                cin>>ar[i];
            sort(ar,ar+n);
            if(n==1)
                cout<<"YES\n";
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    if(ar[i+1]-ar[i]<=1)
                        cnt++;
                }
                if(n-cnt==1)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
                
            
                
            }
            
            
        }
    return 0;
}
