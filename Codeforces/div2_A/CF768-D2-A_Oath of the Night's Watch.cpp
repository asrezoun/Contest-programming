#include<cstdio>
#include<algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ll n,mi,ma;
    scanf("%lld",&n);

    ll ar[n]; ll cnt=0;

    for(ll i=0;i<n;i++)
        scanf("%lld",ar+i);

    sort(ar,ar+n);

    for(ll i=1;i<n-1;i++)
        {

                    mi = ar[i]-ar[0];
                    ma = ar[n-1] - ar[i];

                    if(mi>0 && ma>0)
                        cnt++;
        }
    printf("%lld",cnt);
    return 0;

}
