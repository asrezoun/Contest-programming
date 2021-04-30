#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,res=0;
   cin>>n;
   int ar[n];
   vector<int>freq(32,0);

   for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int node:ar)
    {
        for(int i=0;i<32;i++)
            {
                if(node & (1<<i))
                    freq[i]++;
            }
    }
    for(int i=0;i<32;i++)
        if(freq[i]%2==1)
            res += (1<<i);

    cout<<res<<"\n";
}
