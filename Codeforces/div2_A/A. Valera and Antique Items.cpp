#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>res;

    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        int ar;
        bool flag=false;

        for(int j=0;j<p;j++)
            {
                cin>>ar;
                if(k>ar)
                    flag= true;
            }
        if(flag)
            res.push_back(i);
        
    }
cout<<res.size()<<"\n";
for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";


}