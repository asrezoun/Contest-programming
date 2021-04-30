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
bool isPrime(int n)
    {
        ///corner case
        if(n<2)
            return false;
        for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                    return false;

            }
        return true;
    }
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t,n;
    cin>>t;
    while(t--)
        {
            cin>>n;
            if(isPrime(n))
                cout<<"yes\n";
            else
                cout<<"no\n";
        }

    return 0;
}
