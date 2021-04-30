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
#include<queue>

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
            //int ar[n+1];
            cin>>n;
            ull x;
            ull cola=0,notCola=0;

            for(int i=1;i<=n;i++)
                {
                    cin>>x;
                    if(i%2==1)
                        cola ^= x;
                    else
                    {
                        notCola ^=x;
                    }
                }
                    if(cola>notCola)
                        cout<<"WIN\n";
                    else if(cola<notCola)
                    {
                        cout<<"LOSE\n";
                    }
                    else
                    {
                        cout<<"DRAW\n";
                    }
                //cout<<cola<<" "<<notCola<<"\n";
                    
                    
                
        }

    return 0;
}
