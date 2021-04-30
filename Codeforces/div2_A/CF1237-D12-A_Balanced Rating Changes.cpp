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

    int n,odd=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
                odd++;
        }
    //cout<<odd;
    odd /=2;
    int check=0;
    //cout<<"odd "<<odd<<"\n";
    for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                a[i]/=2;
            else
                {
                    if(odd>0)
                        {
                            if(a[i]<0)
                                    a[i] = (a[i]+1)/2;
                            else
                                    a[i] = (a[i]+1)/2;
                            //cout<<"oddCheck\n";
                            --odd;

                        }
                    else
                        {
                            if(a[i]<0)
                                a[i] = (a[i]-1)/2;
                            else
                                a[i] /= 2;
                        }


                }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<"\n";

    return 0;
}
