#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
   freopen( "input.txt" , "r" , stdin );
   ll value,powerSet_size,sizePrime,ans=0,t;
   ll primes[]={2,3,5,7,11,13,17,19};
   cin>>t;


   sizePrime=sizeof(primes)/sizeof(primes[0]);
   powerSet_size = 1<<sizePrime; /// 1<<n is 2^n;
   // cout<<sizePrime<<"\n"<<powerSet_size<<"\n";
   ///cout<<sizePrime; total possible combination 2^sizePrime and all the numbers have sizePrime=8 bit long
while(t--)
    {
    cin>>value;
    ans =0;
   for(ll counter=1;counter<powerSet_size;counter++) ///check the powerset code
        {
            ll product = 1ll;
            ll totalBits = __builtin_popcount(counter);///how many set bits
            for(ll j=0;j<sizePrime;j++)
                {
                    if(counter & (1<<j))
                        product *= primes[j];

                }

            if(totalBits & 1)///odd
                ans += value/product;  ///odd even because of inclusion exclusion principle
            else
                ans-=value/product;
        }
    cout<<ans<<"\n";
}
}
