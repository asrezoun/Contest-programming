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
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int x,y;
    cin>>x>>y;
    if(x==y)
    {cout<<"0\n";return 0;}
    int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
    while(x%2==0){x/=2;x1++;}
    while(x%3==0){x/=3;x2++;}
    while(x%5==0){x/=5;x3++;}
    ///now calculate y
    while(y%2==0){y/=2;y1++;}
    while(y%3==0){y/=3;y2++;}
    while(y%5==0){y/=5;y3++;}
    ///
    ///now check if remaining x y is equal or not
    if(x!=y)
        {cout<<"-1\n";return 0;}
    int result = abs(x1-y1)+abs(x2-y2)+abs(x3-y3);
    cout<<result<<"\n";
    return 0;
}
