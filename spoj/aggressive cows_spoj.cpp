#include<cstdio>
#include<algorithm>

using namespace std;

typedef long long ll;


bool check(ll arr[],ll cows, ll siz, ll minDist)
{
    ll reqCows=1, previous = arr[0];

    for(ll i=0;i<siz;i++)
    {
        if(arr[i]-previous>=minDist)
        {
            reqCows++;
            previous = arr[i];
        }

        if(reqCows==cows)
            return true;

    }
    return false;


}

int main()
{
    int t;
    scanf("%d",&t);


    while(t--)
    {
        ll c,n,mid,lo=0,hi,ans;
        scanf("%lld %lld",&n,&c);

        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",arr+i);
        }
        sort(arr,arr+n);

        hi = arr[n-1]-arr[0];

        while(lo<=hi)
        {

        mid = lo + (hi-lo)/2;

        if(check(arr,c,n,mid))
        {
            ans = mid;
            lo = mid+1;
        }
        else
        {
            hi = mid-1;

        }

        }
        printf("%lld\n",ans);
    }



}
