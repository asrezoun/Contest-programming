#include<cstdio>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,a,row,col,result;

    scanf("%lld %lld %lld",&n,&m,&a);

    if(n%a==0)
        row = n/a;
    else
        row = (n/a)+1;

    if(m%a == 0)
        col = m/a;
    else
        col = (m/a)+1;

    result = row*col;
    printf("%lld",result);
return 0;



}
