#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    vector<int>ar;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            ar.push_back(x);
        }
    int maxx = *max_element(ar.begin(),ar.end());
    int res1 = maxx + k;

    for(int i=0;i<ar.size();i++)
        {
            int temp1 = maxx - ar[i];
            temp1 = min(temp1,k);
            ar[i] += temp1;
            k -= temp1;
            if(k==0)
                break;
        }
    // for(int i=0;i<ar.size();i++)
    //     cout<<ar[i]<<" ";
    // cout<<"\n"<<k;
    int i=0;
    while(k)
    {
        i = i%n;
        ar[i]++;
        i++;
        k--;
    }
    int res2 = *max_element(ar.begin(),ar.end());

    cout<<res2<<" "<<res1<<"\n";

}