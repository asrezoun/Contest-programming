#include<cstdio>
#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,ans=0;

    scanf("%lld %lld",&n,&m);
    int a[5]={},b[5]={};
    //cout<<a[1];
    for(int i=1;i<=n;i++)
        {
            a[i%5]++;
        }
    for(int i=1;i<=m;i++)
        {
            b[i%5]++;
        }
    for(int i=0;i<5;i++)
        ans += 1LL* a[i] * b[(5-i)%5];  ///a[0]*b0+a1*b4+a2*b3......

    printf("%lld",ans);


}
