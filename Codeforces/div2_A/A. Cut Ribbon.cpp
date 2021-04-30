#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int res=0;

    for(int x=0;x<=n;x++)
    {
        for(int y=0;y<=n;y++)
        {
            int zc= n- x*a - y*b;
            int z = zc/c;

            if(zc%c==0 && zc>=0)
            {
                res = max(res,x+y+z);
            }
        }
    }
    cout<<res<<"\n";
    
    
}