#include<bits/stdc++.h>
using namespace  std;

int ar[100005];

int main()
{
    int n,cnt=0,res=0;
    cin>>n;
    vector<int>keepCount;

    for(int i=0;i<n;i++)
        cin>>ar[i];

    for(int i=0; i<=n; i++)
        {
            //if(ar[i] == ar[i+1])
            cnt++;
            if(ar[i] != ar[i+1])
                {
                    keepCount.push_back(cnt);
                    cnt=0;
                }
        }
    for(int i=0;i<keepCount.size()-1;i++)
        {
            cnt = min(keepCount[i],keepCount[i+1]);
            res = max(cnt,res);
        }
    cout<<res*2<<"\n";

    return 0;
}
