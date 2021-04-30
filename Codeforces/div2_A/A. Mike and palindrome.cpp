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
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    string s;
    cin>>s;
    int size = s.length(),cng=0;
    int a = 0, b= size-1;

    while(a<b)
    {
        if(s[a] != s[b])
            cng++;
        a++;
        b--;
    }
    if(cng==1||(size%2==1 && cng==0))
        cout<<"YES\n";
    else
    {
            cout<<"NO\n";
    }
    

    return 0;
}
