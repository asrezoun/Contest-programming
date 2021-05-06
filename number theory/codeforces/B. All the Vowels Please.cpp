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
    int k;
    cin>>k;
    string s="aeiou";
    int n=0,m=0;
    for(int i=5;i<=k;i++)
        {
            if(k%i==0 && k/i>=5)
                {
                    n=i;
                    m=k/i;
                    break;
                }

        }
    if(n==0)
        {cout<<"-1\n"; return 0;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<s[(i+j)%5];
       // cout<<"\n";
        }



    return 0;
}
