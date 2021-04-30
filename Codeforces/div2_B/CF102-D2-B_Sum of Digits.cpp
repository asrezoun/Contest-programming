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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    string s;
    cin>>s;

    ll len,cnt=0;
    len = s.length();
    //cout<<len;
    if(len<2)
        cout<<1;
    else
        {
            while(s.length()>1)
                {
                    ll ans=0;
                    for(ll i=0;i<s.length();i++)
                        {
                            ans += s[i]-'0';
                        }
                        //cout<<ans<<"\n";
                    s = to_string(ans);
                    cnt++;
                }
            cout<<cnt;
        }

    return 0;
}
