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
#define Size 10

int main() {
    fastio;
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    int t;
    cin>>t;
    while(t--)
        {
            ll n;
            cin>>n;

            ll ar[n+1],freq[n+1]={0};
            ll sum =0,flag=0;
            for(ll i=1;i<=n;i++)
                {
                    cin>>ar[i];
                    sum += ar[i];

                    sum = (sum %n +n)%n;

                    freq[i]=sum;
                }
            for(ll i=1;i<=n;i++)
                {
                    for(ll j=i+1;j<=n;j++)
                        {
                            if(freq[i]==freq[j])
                                {
                                    cout<<j-i<<"\n";
                                    for(ll k= i+1;k<=j;k++)
                                        cout<<k<<" ";
                                    flag++;
                                    cout<<"\n";
                                    break;
                                }
                        }
                        if(flag>0)
                            break;
                }
                if(flag==0)
                    cout<<"-1"<<"\n";

        }



    return 0;
}
