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
inline bool compare(int a,int b)
    {
        return a>b;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,x,sum=0;
    cin>>n;
    vector<int>odd,even;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x & 1)
                odd.pb(x);
            else
                even.pb(x);
        }
    sort(odd.begin(),odd.end(),compare);
    if(odd.size()==0)
        {cout<<"0\n";return 0;}
    for(int i=0;i<even.size();i++)
        sum += even[i];
    for(int i=0;i<odd.size()-1;i++)
        sum += odd[i];

    if(odd.size()&1)
        sum += odd.back();

    cout<<sum<<"\n";

    return 0;
}
