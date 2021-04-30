#include<iostream>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k,res,div;

    cin>>n>>k;
    div = (n+1)/2;
    if(k>div)
        {
            ///even
            k = k-div;
            res = 2*k;
        }
    else
        {
            ///odd
            res = 2*k -1;
        }
    cout<<res;


}
