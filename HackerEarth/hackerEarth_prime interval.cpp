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
#define mx 10005
bitset<mx>b;

void sieve(int l,int r)
    {
        for(int i=2;i*i<=mx;i++)
            {
                if(b[i]==0)///if prime
                    {
                        for(int j=i*i;j<=mx;j+=i)
                            b[j]=1;
                    }
            }

    b[0]=b[1]=1;
    for(;l<=r;l++)
        {
            if(b[l]==0)
                cout<<l<<" ";
        }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int l,r;

    cin>>l>>r;
    ///i donno why the bitset b is becoming reset here and works fine in the sieve function
    sieve(l,r);



    return 0;
}
