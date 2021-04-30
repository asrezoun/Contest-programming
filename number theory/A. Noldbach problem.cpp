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
#define mx 1005
vector<int>primes;
bitset<mx>b;
void sieve()
    {
        b[0]=b[1]=1;
        for(int i=2;i<mx;i++)
            {
                if(b[i]==0)
                    {
                        for(int j=i+i;j<mx;j+=i)
                            b[j]= 1;
                    }
            }
        primes.pb(2);
        for(int i=3;i<mx;i+=2)
            {
                if(b[i]==0)
                    primes.pb(i);
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,k;
    cin>>n>>k;
    int i=0;
    int cn=0;
    /*
    if(n<5)
        {cout<<"NO\n"; return 0;}*/
    sieve();
    while(1)
        {
            int temp = primes[i]+primes[i+1];
            if(temp>n)
                break;
            if(b[temp+1]==0)
                cn++;
            i++;
        }
    if(cn<k)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
