///ZCO15002--codechef
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long>arr;
    long long n,k,i,x,cnt=0,j;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);

    }


    sort(arr.begin(),arr.end());


   for(i=0,j=1;i<n;)
    {
        if(abs(arr[i]-arr[j])>=k)
        {
            cnt+=(n-j);
            i++;
        }
        else
            j++;
    }

    cout<<cnt<<"\n";

    return 0;
}

