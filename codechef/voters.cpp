#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//vector<ll>data;
ll data[1000001];

int main()

{
    ll N1,N2,N3,Count = 0;
    cin>>N1>>N2>>N3;

    ll a[N1],b[N2],c[N3];


    ///input
    for(ll i=0;i<N1;i++)
        {
            cin>>a[i];

        }
    for(ll i=0;i<N2;i++)
        {
            cin>>b[i];

        }
    for(ll i=0;i<N3;i++)
        {
            cin>>c[i];

        }
    ///process final list
    for(ll i=0;i<N1;i++)
        {
            data[a[i]]++;
        }
    for(ll i=0;i<N2;i++)
        {
            data[b[i]]++;
        }
    for(ll i=0;i<N3;i++)
        {
            data[c[i]]++;
        }

    ///print the outputs
    for(ll i=0;i<1000001;i++)
    {
        if(data[i]>1)
            Count++;

    }
    cout<<Count<<endl;
    for(ll i=0;i<1000001;i++)
    {
        if(data[i]>1)
            cout<<i<<endl;
    }

    return 0;

}
