#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,sum=0;
    cin>>n>>d;
    int ar[n];

    for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum += ar[i];
        }
    if( (sum +  (n-1)*10)>d )
        cout<<"-1\n";
    else
    {
        cout<< (d-sum)/5<<"\n";

    }
    
}