#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a,b,res=0;

    cin>>n>>a>>b;

    if(a>b)
        swap(a,b);
    for(int i=1;i<=n-1;i++)
        {
            int j = a/i;
            int k = b/(n-i);
            if(j>0 && k>0)
                {
                    int temp = min(j,k);
                    res = max(res,temp);
                }
        }
    cout<<res<<"\n";

}