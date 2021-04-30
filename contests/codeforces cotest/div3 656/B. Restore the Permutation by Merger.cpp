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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            int x=2*n;
            int ar[x];
            vector<int>fnl;
            for(int i=0;i<x;i++)
                cin>>ar[i];
            for(int i=0;i<x;i++)
                {
                    int temp = ar[i];

                    if(temp != 0)
                        {
                            for(int j=i;j<x;j++)
                                {
                                    if(ar[j]==temp)
                                        ar[j]=0;
                                }
                            fnl.pb(temp);
                        }
                }
            for(int i=0;i<fnl.size();i++)
                cout<<fnl[i]<<" ";
            cout<<"\n";
            
        }

    return 0;
}
