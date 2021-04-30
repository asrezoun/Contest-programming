#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>v;
    int l,r;
    for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            v.push_back(make_pair(l,r));
        }
    int min=1, res=0;
    
    for(int i=0;i<n;i++)
    {
        int temp1= v[i].first;
        int temp2= v[i].second;
        res += temp2-temp1+1;
        int temp3 = v[i].first-min;
        temp3 = temp3 % x;
        res += temp3;
        min = v[i].second+1;

    }
    cout<<res<<"\n";
}