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
            ull a,b,temp;
            cin>>a>>b;
            if(a-b!=1)///a^2-b^2=(a+b)*(a-b)
                {cout<<"NO\n";continue;}
            temp = a+b;
            bool flag= false;
            for(ll i=2;i*i*1ll<=a+b;i++)
                {
                    if(temp%i==0)
                        {
                            flag=true;
                            break;
                        }
                }
            if(flag)
                cout<<"NO\n";
            else
                cout<<"YES\n";


        }

    return 0;
}
