#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>

using namespace std;

#define ll long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pi pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
inline bool compare(pll p1,pll p2)
{
    return p1.second>p2.second;
}

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    ll n,m,matches=0,tofill;
    cin>>n>>m;
    vector<pll>v;
    for(ll i=0;i<m;i++)
        {
            pll p;
            cin>>p.first>>p.second;
            v.push_back(p);
        }
    sort(v.begin(),v.end(),compare);
    /*for(ll i=0;i<m;i++)
        {
          cout<<v[i].first<<" "<<v[i].second<<"\n";
        }*/
    for(ll i=0;i<m;i++)
        {
            if(n==0)
                break;
            if(v[i].first<=n)
                {
                    matches += v[i].first * v[i].second;
                    n = n - v[i].first;

                }
            else
                {
                    matches += n * v[i].second;
                    n = n-n;
                }
        }
    cout<<matches<<"\n";

    return 0;
}
