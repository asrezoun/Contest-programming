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
ll arr[mx];
void etf()
    {

        for(int i=0;i<mx;i++)
            arr[i]=i;
        ///etf sieve starts
        //arr[1]=0;
        for(int i=2;i<mx;i++)
            {
                if(arr[i]==i)///means prime cz it will remain equal to its index cz no number can change it since its a prime
                    {
                        for(int j=i;j<mx;j+=i)
                            {
                                arr[j]/=i;
                                arr[j]*=(i-1)*1ll;
                            }
                    }
            }
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    etf();
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            cout<<arr[n]<<"\n";
        }

    return 0;
}
