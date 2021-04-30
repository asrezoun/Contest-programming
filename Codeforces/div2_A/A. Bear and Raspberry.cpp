#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,profit=0;
    cin>>n>>c;

    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++)
        {
            int temp = ar[i]-ar[i+1]-c;
            profit = max(profit,temp);
        }
    cout<<profit<<"\n";

}