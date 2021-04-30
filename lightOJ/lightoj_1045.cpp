#include<bits/stdc++.h>
using namespace std;

double logg[1000005];
int main()
{


    logg[0] = 0;
    int t,n,b;
    long long val;

    for(int i=1;i<=1000000;i++)
    {
        logg[i]=logg[i-1]+log(i);
    }

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>b;
        val = ((logg[n]/log(b))+1);
        cout<<"Case "<<i+1<<": "<<val<<endl;
    }
}
