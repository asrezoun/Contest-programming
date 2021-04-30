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
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    int n,ans=INT_MIN,mx=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ///determine
    for(int i=0;i<n;i++)
        {
            mx=1;
            int j=i;
            while(j>=1 && a[j-1]<=a[j]) /// lower half
                {
                    mx++;
                    j--;
                }

            j=i;
            while(j<=n-2 && a[j+1]<=a[j]) ///upper half comparing subsequent 2
                {
                    mx++;
                    j++;
                }
            ans = max(ans,mx);
        }
    cout<<ans<<"\n";

    return 0;
}
