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
int ar[1000];
int gcd(int a,int b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
void sieve()
    {
        for(int i=2;i<1000;i++)
            {
                if(ar[i]==0)
                    for(int j=i*i;j<1000;j+=i)
                        ar[j]=1;
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    sieve();
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<=c;i++)
        {
            int y= c-a*i;
            if(y>=0 && y%b==0)
                {
                    cout<<"YES";
                    return 0;
                }
        }
    cout<<"NO";


    return 0;
}
