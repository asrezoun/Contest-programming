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
///couldn't solve it :(
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n;
    cin>>n;
    ll x;
    ll ar[n],br[n];

    for(int i=0;i<n;i++)
        {
            cin>>x;
            ar[i]=x;
            br[i]=x;
        }
    ///start
    ll start;
    //ll indStart;
    for(int i=0;i<n-1;i++)
        {
            start = i;
            if(ar[i+1]<ar[i])
                break;
        }
    ll end;
    for(int j=n-1;j>0;j--)
        {
            end = j;
            if(ar[j-1]>ar[j])
                break;
        }
    ///caluculation done
    sort(br,br+n);
    
    bool flag2= true;
    for(int i=0;i<n;i++)
        {
            if(ar[i]!=br[i])
                flag2 = false;
        }
    if(flag2)
        {cout<<"yes\n";cout<<1<<" "<<1; return 0;}
    ll s = start, e = end;
    while(start<end)
        {
            swap(ar[start],ar[end]);
            start++;
            end--;
        }
    bool flag = true;
    for(int i=0;i<n;i++)
        {
            if(ar[i]!=br[i])
                {
                    flag= false;
                    break;
                }
        }
    if(flag)
        {
            cout<<"yes\n";
            cout<<s+1<<" "<<e+1<<"\n";
        }
    else
    {
            cout<<"no\n";
    }
    
    // for(int i=0;i<n;i++)
    //     cout<<ar[i]<<" ";
   // cout<<ar[start]<<"  "<<ar[end];
    




    return 0;
}
