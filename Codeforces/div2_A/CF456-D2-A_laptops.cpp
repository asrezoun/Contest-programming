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
    vector<pii>v;
    int x,y,n;
    cin>>n;
    int mini=INT_MAX,ma=INT_MIN;

    for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
            /*
            if(y<=mini)
                {
                    mini = y;
                    ma = max(ma,x);
                }*/
        }

        //cout<<mini<<"\n";
    bool flag=false;
    sort(v.begin(),v.end());
    ma=v[0].first;
    mini = v[0].second;
    /*
    for(int i=1;i<n;i++)
        {
            if(v[i].second<=mini)
                {
                    mini = v[i].second;
                    ma = v[i].first;
                }
        }*/
   // int temp =v[0].first;
    for(int i=1;i<n;i++)
        {
            if(v[i].second<v[i-1].second && v[i].first>v[i-1].first)
                {
                    flag = true;
                    break;
                }
        }
    if(flag)
        cout<<"Happy Alex\n";
    else
        cout<<"Poor Alex\n";


    return 0;
}
