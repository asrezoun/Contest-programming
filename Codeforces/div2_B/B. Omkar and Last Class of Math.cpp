#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt" , "r" , stdin);
    int t;
    cin>>t;

    label:
    while(t--)
    {
        int n,temp;
        cin>>n;

        for(int i=2;i<=sqrt(n)+1;i++)
        {
            if(n%i==0)
            {
                int x = n/i; //maximum divisor of n;
                cout<<x<<" "<<n-x<<"\n";
                goto label;
            }
        }
        cout<<1<<" "<<n-1<<"\n"; //in case prime number;
        

        
    }
}