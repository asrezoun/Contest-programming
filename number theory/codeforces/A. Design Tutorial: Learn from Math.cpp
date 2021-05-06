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
#define mx 1000001
bitset<mx>b;

void sieve()
    {
        b[0]=b[1]=1;
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
    sieve();
    //cout<<b[23];
    int n;
    cin>>n;
    int x,y;
    x=4;y=n-4; ///4 is the first composite number
    for(int i=0;i<n;i++)
        {
            if(b[x]==1 && b[y]==1)
                {cout<<x<<" "<<y<<"\n";return 0;}
            else
                {x++;y--;}
        }


    return 0;
}
