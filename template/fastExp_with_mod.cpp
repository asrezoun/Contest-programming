#include<iostream>

using namespace std;
typedef long long ll;
#define mod 13//1000000007

ll fast_exp_mod(ll base,ll power)
    {
        ll result;
        result = 1;
        base = base%mod; ///cut the base if its bigger than the mod

        if(base ==0)
            return 0; /// incase base is divisible by mod

        while(power>0)
            {
                if(power &1)///if odd
                    result = (result * base) % mod; /// at least base to power 1 e to asbei ekhane

                power = power>>1;/// power /=2;

                base = (base * base) % mod;


            }
        return result;

    }
int main()
{
    ll base,power;

    cin>>base>>power;
    cout<<fast_exp_mod(base,power);


}
