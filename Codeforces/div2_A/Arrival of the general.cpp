#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxPos= INT_MIN,minPos= INT_MAX,maxVal=INT_MIN,minVal= INT_MAX;
    cin>>n;
    int arr[n+1];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++)
        {
            if(arr[i]>maxVal)
                maxPos = i,maxVal = arr[i];
        }
    for(int i=n;i>0;i--)
        {
            if(arr[i]<minVal)
                minPos= i, minVal = arr[i];
        }
    //cout<<maxPos<<minPos<<" ff\n";
    int res = (maxPos-1) + (n-minPos);
    if(maxPos>minPos)
        res--;
    cout<<res<<"\n";

}