#include<cstdio>
#include<climits>
#include<algorithm>

using namespace std;

typedef long long ll;

//ll a[1000005],b[1000005],pref[1000005],sum[1000005],diff[1000005];

int main()
{
    ll maximum,n;
    scanf("%lld",&n);
    ll a[n],b[n],pref[n],sum[n],diff[n];

    maximum = LLONG_MIN;

    for(ll i=0;i<n;i++)
    {
        scanf("%lld",a+i);
        maximum = max(maximum,a[i]); /// first case i==j
    }
    for(ll i=0; i<n; i++)
    {
        scanf("%lld",b+i);

        if(i==0)
        {
            pref[i] = b[i];
        }
        else{
            pref[i] = pref[i-1] + b[i];
        }
    }

    ///second case i<j
    diff[0] = a[0]-pref[0];

    for(ll i=1;i<n;i++)
    {
        diff[i] = max(diff[i-1], a[i]-pref[i]);
    }
    for(ll i=1;i<n;i++)
    {
        maximum = max(maximum, a[i]+diff[i-1]+pref[i-1]);
    }

    ///third case i>j
    sum[0]=a[0];
    for(ll i=1;i<n;i++)
    {
        sum[i]= max(sum[i-1],a[i]+pref[i-1]);
    }
    for(ll i=1;i<n;i++)
    {
        maximum = max(maximum,a[i]+pref[n-1]-pref[i]+sum[i-1]);
    }

    printf("%lld\n",maximum);

}
