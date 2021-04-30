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
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
   // freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    int n,p,cn=0;
    cin>>n>>p;
    int a[n];
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
            int d = i-p; ///distance from
            int t = p-d; ///pair of i
            if(t<1||t>n||a[i]==a[t])
                cn++;
        }
        }
        cout<<cn<<"\n";
    return 0;
}
