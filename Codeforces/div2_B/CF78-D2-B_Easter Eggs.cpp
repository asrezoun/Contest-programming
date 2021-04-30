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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n;
    cin>>n;
    string s="GBIV";
    //cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<" "<<s[4];
    cout<<"ROY";
    //cout<<s[0];
    for(int i=4;i<=n;i++)
        {
            int x = i%4;
            cout<<s[x];
        }

    return 0;
}
