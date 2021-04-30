#include<cstdio>
//#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;
int main()
{
    int n;
    scanf("%d",&n);
    ll a[n],mi,ma;

    for(int i=0;i<n;i++)
        {
            scanf("%lld",a+i);

        }

    for(int i=0;i<n;i++)
        {
            if(i==0)
                {
                    mi = a[i+1]-a[i];
                    ma = a[n-1] - a[i];
                }
            else if(i==n-1)
                {
                    mi = a[i] - a[i-1];
                    ma = a[i] - a[0];
                }
            else
                {
                    mi = min(a[i] - a[i-1],a[i+1]-a[i]);
                    ma = max(a[n-1]-a[i],a[i]-a[0]);
                }
            printf("%lld %lld\n",mi,ma);

        }
return 0;
}
