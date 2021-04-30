/*#include<cstdio>
#include<vector>

using namespace std;
typedef long long ll;
int main()
{
    ll n,andyMax,bobMax,sum=0;
    scanf("%lld %lld %lld",&n,&andyMax,&bobMax);
    vector<ll>andyTip(n),bobTip(n);
   // vector<ll> :: iterator itAndy,itBob;

    for(ll i=0;i<n;i++)
            scanf("%lld",&andyTip[i]);
    for(ll i=0;i<n;i++)
            scanf("%lld",&bobTip[i]);

    ///input done


    for(ll i=0;i<n;i++)
        {
            if(andyMax==0)
                {
                    sum+=bobTip[i];
                }
            else if(bobMax==0)
                {
                    sum+=andyTip[i];
                }
            else
                {
                    ///common kaaj
                    if(andyTip[i]>=bobTip[i])
                        {
                            sum+=andyTip[i];
                            andyMax--;
                        }
                    else
                        {
                            sum+= bobTip[i];
                            bobMax--;
                        }

                }

        }
        printf("%lld",sum);
        return 0;

}*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define fi first
#define se second
const int N = 3e5+6;
const int mod = 1e9+7;
const ll inf = 1e18;
ll a[N],b[N];
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        v.pb({-abs(a[i]-b[i]),i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }
    ll ans = 0;
    for(int i=0;i<n;i++){
        int idx = v[i].se;
        if(a[idx]>=b[idx]){
            if(x){
                ans+=a[idx];
                x--;
            }
            else{
                ans+=b[idx];
                y--;
            }
        }
        else{
            if(y){
                ans+=b[idx];
                y--;
            }
            else{
                ans+=a[idx];
                x--;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
 //   cin>>t;
    while(t--)solve();
    return 0;
}

