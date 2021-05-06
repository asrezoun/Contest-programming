#include<iostream>
#include<vector>
using namespace std;

#define ll long long
vector<int>prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
void fact (ll n )
{
    bool flag = false;
    for ( ll i = 0; i < prime.size() and prime[i]<= n; i++ )
    {
        ll x = n;
        ll freq = 0,c;

        while ( x / prime[i] )
        {
            freq += x / prime[i];
            x = x / prime[i];
        }

        if(!flag)
        {

            printf("%lld (%lld)", prime[i], freq );
            flag=true;
        }
        else
        {
            printf(" * ");
            printf("%lld (%lld)",prime[i],freq);

        }
    }
}
int main()
{
    ll t,n;
    scanf("%lld",&t);

    for(ll x=1; x<=t; x++)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld = ",x,n);
        fact(n);
        printf("\n");
    }
}