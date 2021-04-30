#include<bits/stdc++.h>
using namespace std;
int main()
{

    //freopen("input.txt" , "r" , stdin);
    int t;
    cin>>t;

    while(t--)
    {
        int n,ods=0,evens=0;
        cin>>n;
        vector<int>odd,even;

        for(int i=1;i<=2*n;i++)
        {
            int x;
            cin>>x;

            if(x%2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        ods= odd.size();
        evens = even.size();
        
        if(ods % 2 == 1)
        {
            ods--;
            evens--;
        }
        else if(ods == 0)
            evens -= 2;
        else
            ods -=2;

        for(int i=0;i<ods;i+=2)
            cout<<odd[i]<<" "<<odd[i+1]<<"\n";
        for(int i=0;i<evens;i+=2)
            cout<<even[i]<<" "<<even[i+1]<<"\n";



    }
}