#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sumx=0,sumy=0,sumz=0,a,b,c;
    cin>>n;

    for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            sumx += a;
            sumy += b;
            sumz += c;
        }
    if(sumx==0 and sumy == 0 and sumz==0)
        cout<<"YES\n";
    else
    {
            cout<<"NO\n";
    }

    return 0;
    
}