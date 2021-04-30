#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int low=0,mid=0,hi=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    while(mid<=hi)
        {
            if(arr[mid]==0)
                {swap(arr[low],arr[mid]);low++;mid++;}
            else if(arr[mid]==1)
                mid++;
            else if(arr[mid]==2)
                {swap(arr[mid],arr[hi]);hi--;}
        }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
