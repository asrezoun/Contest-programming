#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,temp,res=INT_MAX;
    cin>>n>>m;
    int ar[m];

    for(int i=0;i<m;i++)
        cin>>ar[i];
    sort(ar,ar+m);
    n--;
    for(int i=0;i<m-n;i++)
        {
            temp = ar[i+n]-ar[i];
            res = min(res,temp);
        }
    cout<<res<<"\n";
    return 0;
}