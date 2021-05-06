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
            int siz = 2*n;
            //int odd[siz],even[siz];
            vector<int>odd,even;
            int od=0,ev=0,temp;
            for(int i=1;i<=siz;i++)
                {
                   cin>>temp;
                   if(temp&1)
                        {
                            od++;
                            odd.pb(i);
                        }
                    else
                        {
                            ev++;
                            even.pb(i);
                        }
                }
            if(od&1)
                {od--;ev--;}
            else if(od==0)
                ev -=2;
            else
                od -=2;
            for(int i=0;i<od;i+=2)
                cout<<odd[i]<<" "<<odd[i+1]<<"\n";
            for(int i=0;i<ev;i+=2)
                cout<<even[i]<<" "<<even[i+1]<<"\n";
        cout<<"\n\n";
        }

    return 0;
}
