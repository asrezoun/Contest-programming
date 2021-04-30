#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int res1, res2, res3=INT_MAX,finalres=INT_MAX;

    res1 = n*a;

    int temp = n/m;

    if(m*temp == n)
        {
            res2 = temp*b;
        }
    else
    {
        res2 = (temp+1)*b;
        int temp1 = n-(temp*m);
        res3 = (temp * b) + (temp1*a);
    }
    //cout<<res1<<" "<<res2<<" "<<res3<<" hh\n";
    finalres = min(res1,res2);
    finalres = min(res3,finalres);

    cout<<finalres<<"\n";
}