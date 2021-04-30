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
vector<int>factos;
///perfect squares has odd factors
void factFunc()
    {
        for(int i=1;i<1001;i++)
            {
                int temp = sqrt(i);
                if(i==temp*temp)
                    factos.pb(i);
            }
            /*
        cout<<factos.size()<<"\n";
          for(int i=0;i<factos.size();i++)
                cout<<factos[i]<<" ";*/
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif

    factFunc();
    int t,n;
    cin>>t;
    while(t--)
        {
            cin>>n;
            int i=0;
            while(factos[i]<=n)
                cout<<factos[i++]<<" ";
            cout<<"\n";
        }

    return 0;
}
