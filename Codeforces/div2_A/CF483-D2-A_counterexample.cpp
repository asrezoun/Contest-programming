#include<cstdio>

using namespace std;
typedef long long ll;
int main()
{
    ll l,r;
    scanf("%lld %lld",&l,&r);

    if(l%2 !=0)
        l++;
    if(r-l<2)
        printf("%d",-1);

    else printf("%lld %lld %lld",l,l+1,l+2);
    return 0;


}
