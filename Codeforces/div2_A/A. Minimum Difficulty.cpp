#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, res= INT_MIN;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++)
    {
        res = max(abs(ar[i+1]-ar[i]),res);
    }
    int temp;
    int res2= INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        temp = abs(ar[i-1]-ar[i+1]);
        temp = max(res,temp);
        res2 = min(temp,res2);
    }
    cout<<res2<<"\n";
}