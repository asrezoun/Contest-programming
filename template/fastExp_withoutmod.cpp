#include<iostream>

using namespace std;

typedef long long ll;

ll fast_exp(ll base,ll power)
    {
        ll result =1;
        if(base==0)
            return 0;
        while(power>0)
            {
                if(power & 1) /// power %2 ==1
                    result *= base;

                power = power>>1; /// right shift; power /=2;
                base = base *base;
            }
        return result;

    }
int main()
{
    ll base,power;
    cin>>base>>power;

    cout<<fast_exp(base,power);



}
