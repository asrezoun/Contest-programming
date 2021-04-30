#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,n,cnt=0;
        cin>>a>>b>>n;

        while(1)
        {
            if(a<=b)
                    a += b;
            else
                    b+=a;
            cnt++;
            if(a>n || b>n)
                break;
            
        }
        cout<<cnt<<"\n";
    }
}