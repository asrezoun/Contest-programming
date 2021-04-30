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
#define mx 1000005

bitset<mx>b;
int prefix[mx];

void sieveWithcumulative()
    {
        b[0]=b[1]=1;
        for(int i=2;i*i<=mx;i++)///let 0 means prime
            {
                if(b[i]==0)
                    {
                        for(int j=i*i;j<=mx;j+=i)
                            b[j]=1;
                    }
            }
        //cout<<b[2];
        int cn=0;
        for(int i=0;i<=mx;i++)
            {
                if(b[i]==0) ///means prime
                    cn++;
                if(b[cn]==0)    ///did mistake here previously.. in the question they meant any number(composite or prime)
                    prefix[i]=1; /// i did for only primes,,, so it means ,, 4 is a pp bcz including it there are two prime no
                else             /// 2 & 3 total two so it is also a pp
                    prefix[i]=0;
            }
        ///above one determined the prime prime numbers
        ///now make cumulative sum so number of pp numbers are calculated in 0(1) :p
        for(int i=1;i<=mx;i++)
            {
                prefix[i] += prefix[i-1];
            }
    }

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    sieveWithcumulative();
    /*
    for(int i=0;i<=10;i++)
        cout<<prefix[i]<<" ";
    */
    //cout<<"\n";
    while(t--)
        {
            int l,r;
            //si(l);
            //si(r);
            cin>>l>>r;
            //cout<<l<<" "<<r<<" ";
            cout<<prefix[r]-prefix[l-1]<<"\n";
        }

    return 0;
}
