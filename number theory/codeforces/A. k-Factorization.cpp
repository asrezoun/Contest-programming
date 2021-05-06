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
int ar[mx];
vector<int>kf;
void sieve()
    {
        ar[0]=ar[1]=1;
        for(int i=2;i<mx;i++)
            {
                if(ar[i]==0)
                    {
                        for(int j=i;j<mx;j+=i)
                            {
                                if(ar[j]==0)
                                    ar[j]=i;
                            }
                    }

            }
    }
void kFactor(int n,int k)
    {
        int cn=0;
        for(int i=0;i<k-1;i++)
            {
                int temp = ar[n];
                kf.pb(temp);
                n/=ar[n];
                cn++;
                if(n<2)
                    break;
            }
        //cout<<cn<<"\n";
        if(n>1)
            kf.pb(n);
        if(kf.size()!=k)
            cout<<"-1\n";
        else
            {
                for(int i=0;i<kf.size();i++)
                    cout<<kf[i]<<" ";
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif

    int n,k;
    cin>>n>>k;
    sieve();
    kFactor(n,k);
    return 0;
}
