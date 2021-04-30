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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int a=0,b,n,res=0,enrg=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>b;
            enrg += a-b;

            if(enrg<0)
                {
                    res = res-enrg;
                    enrg=0;
                }
            a = b; ///set the prev
        }
    cout<<res;

    return 0;
}
