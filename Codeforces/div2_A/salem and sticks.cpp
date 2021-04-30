#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,mm=2000,mmax= 0,t;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
        {cin>>ar[i]; mm = min(mm,ar[i]); mmax = max(mmax,ar[i]);}
    
    int cost =0,ft,fcost=INT_MAX;

    ///int t= (sum+1)/n;
    //cout<<"min"<<mm<<" "<<mmax;
for( t=mm;t<=mmax;t++)
{
    cost =0;
    for(int i=0;i<n;i++)
        {
            int temp = abs(t-ar[i]);
            if(temp<2)
                continue;
            else
            {
                cost += temp-1;
            }
            
        }
        if(cost<fcost)
            fcost = cost, ft =t;
}
    cout<<ft<<" "<<fcost<<"\n";
}