#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
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
#define maxs 87000018
//bitset<87000018>b;

vector<int>primes;
bool ar[87000018];

void sieve()
    {
        int maxN=87000018;
        ar[0]=ar[1]=true;
       // primes.push_back(2);

        for(int i=2;i*i<=maxN;i++)
            {
                if(!ar[i])
                    {
                        //primes.push_back(i);
                        for(int j=i*i;j<=maxN;j+=i)
                            {
                                ar[j]=true;

                            }
                        //primes.push_back(i);
                    }
            }
        primes.push_back(2);
        for(int i=3;i<=maxN;i+=2)
            {
                if(!ar[i])
                    primes.push_back(i);
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int q,n;
    cin>>q;
    sieve();

    while(q--)
    {
        cin>>n;
        cout<<primes[n-1]<<"\n";
    }




    return 0;
}
