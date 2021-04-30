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
#include<queue>

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
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,mini,maxi,temp,temp2;
    cin>>n;
    temp2 = n/7;
    mini = 2*temp2;
    temp =  n % 7;
    
    if(temp>2)
        temp =2;
    maxi = mini + temp;
    temp = n-(temp2*7);
    if(temp==6)
        mini++;
    cout<<mini<<" "<<maxi<<"\n";


    return 0;
}
