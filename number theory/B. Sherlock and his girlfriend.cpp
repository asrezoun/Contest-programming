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
bitset<mx>b; //ar[mx];
void sieve()
    {
        for(int i=2;i*i<mx;i++)
            {
                if(b[i]==0)
                    {
                        for(int j=i*i;j<mx;j+=i)
                            b[j]=1;
                    }
            }
    }


int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n;
    sieve();
    cin>>n;
    if(n>2)
    cout<<"2"<<"\n";
    else
    cout<<"1"<<"\n"; ///corner case
    for(int i=2;i<=n+1;i++)
        cout<<b[i]+1<<" ";
    return 0;
}
