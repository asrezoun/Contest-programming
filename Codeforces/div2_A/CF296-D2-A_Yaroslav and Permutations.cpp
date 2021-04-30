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

    int n,maxx=INT_MIN;
    cin>>n;

    int a[n],check[1001]={0};

    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            check[a[i]]++;

        }
    for(int i=0;i<1001;i++)
        maxx = max(maxx,check[i]);

    if(maxx<=(n+1)/2)
        cout<<"YES\n";
    else
        cout<<"NO\n";



    return 0;
}
