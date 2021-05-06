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
#define mx 100005
bitset<mx>b;
vector<int>primes;
void sieve()
    {
        for(int i=3;i*i<mx;i+=2)
            {
                if(b[i]==0)
                    {
                        for(int j=i*i;j<mx;j+=i+i)
                            b[j]=1;
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
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    sieve();
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    int x,temp;
    vector<int>result;
    ///input || closest prime(above x) || distance from it
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>x;
                    temp = *lower_bound(primes.begin(),primes.end(),x);
                    ar[i][j]=temp-x;

                }
        }
        ///now minimal sum wrt rows
        for(int i=0;i<n;i++)
            {
                int sum=0;
                for(int j=0;j<m;j++)
                    sum += ar[i][j];

                result.pb(sum);
            }
         ///now minimal sum wrt columns
        for(int i=0;i<m;i++)
            {
                int sum=0;
                for(int j=0;j<n;j++)
                    sum += ar[j][i];

                result.pb(sum);
            }
    cout<<*min_element(result.begin(),result.end());

    return 0;
}
