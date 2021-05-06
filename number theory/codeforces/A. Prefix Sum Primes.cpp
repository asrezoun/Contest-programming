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
    int n,ones=0,twos=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==1)
                ones++;
            else
                twos++;
        }
    if(ones==0 || twos==0 )
        {
            while(ones--)
                cout<<"1 ";
            while(twos--)
                cout<<"2 ";
        }
    else
        {
            cout<<"2 1 ";
            ones--;twos--;
            while(twos--)
                cout<<"2 ";
            while(ones--)
                cout<<"1 ";
        }

    return 0;
}
