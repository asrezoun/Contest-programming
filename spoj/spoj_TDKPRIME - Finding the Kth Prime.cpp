///accepted with 0.36 and 46 MB
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
#define maxN 87000018
bitset<87000018>b;
vector<int>primes;

void sieveA()
    {
        //b[0]=b[1]=1; ///let 0 prime and 1 as non prime in the bitset
        //primes.pb(2);

        for(int i=3;i*i<=maxN;i+=2) ///calculating only the odd elements :)
            {
                if(b[i]==0) ///if prime then elemenate all of its multiples
                    {
                        for(int j=i*i;j<=maxN;j+=i+i)
                            b[j]=1;
                       // primes.pb((int)i); ///it was the reason of segment fault .. dunno why :(
                       //bujhte parsi.. loop root n porjonto choltese but er uporeo to prime ache just sqrt
                       //er nichei sobaike kata jay dekhe loop chalano laage nai... yeaaaa!! :p
                    }
            }
        primes.push_back(2);
        //cout<<"h9"<<b[9];
        for(int i=3;i<=maxN;i+=2)
            {
                if(b[i]==0)
                    primes.push_back(i);
            }

    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int queries;
    //cin>>queries;
    //cout<<"h"<<b[27];
    si(queries);
    sieveA();
    while(queries--)
        {
            ///takes time wait chill
            int kth;
            si(kth);
            //cin>>kth;
            //cout<<primes[kth-1]<<"\n";
            printf("%d\n",primes[kth-1]);

        }

    return 0;
}
