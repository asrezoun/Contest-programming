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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,left=0,right;
    cin>>n;
    string s;
    cin>>s;
    char ar[n];
    ///corner case
    right =n-1;
    int flag=0;
    for(int i=n-1;i>=0;i--)
        {
            if(flag==0)
                {ar[right]=s[i];right--;}
            else
                {ar[left]=s[i];left++;}
            flag ^=1;
        }
    for(int i=0;i<n;i++)
        cout<<ar[i];

    return 0;
}
