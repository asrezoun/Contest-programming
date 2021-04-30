#include<bits/stdc++.h>
using namespace std;

typedef long long ull;
ull n,k;
ull fastExp(ull base, ull power)
{
    ull result =1;

    while(power>0)
    {
        if(power & 1)
            result *= base;

        power = power>>1; //power/2
        base = base * base;

    }
    return result;
}
ull calc(ull v)
{
    ull result = v;
    ull pow = 1;
    while(1)
    {
        ull temp = fastExp(k,pow);
        if(temp>v)
            break;
        temp = v/temp;
        
        result += temp;
        pow++;

    }
    return result;
}
int main()
{
    cin>>n>>k;

    ull lo =0 , hi= n;
    ull mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        //cout<<"\n.."<<mid<<"\n"; //to check
        ull res1 = calc(mid);
        ull res2 = calc(mid-1);
        //cout<<" --"<<res1<<"--"<<res2<<"\n"; // to check

        if(res1>= n && res2<n)
            break;
        if(res1>n)
            hi = mid-1;
        else
        {
            lo= mid +1;
        }
        
    }
    cout<<mid<<"\n";
}