#include<bits/stdc++.h>
using namespace std;
int n,k;

int calc(int a)
{
    return (a*(a+1))/2;
}
int bsearch(int x,int y)
{
    int low = 0;
    int hi = x;
    int mid;
    while(low<=hi)
    {
        mid = (low+hi)/2;

        int temp = calc(mid);
        int temp2 = calc(mid+1);

        if(temp<=y && temp2>y)
            return mid;
        
        if(temp<y)
            low = mid +1;
        else
        {
            hi =mid-1;
        }
        
    }
}
int main()
{
    //int n,k;
    cin>>n>>k;
    int res = bsearch(n,(240-k)/5);
    if(res>n)
        res = n;
    cout<<res<<"\n";
    


}