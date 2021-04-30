#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,cnt_2=0,cnt_3=0;
        cin>>n;

        while(n%2==0)
        {
            n/=2;
            cnt_2++;
        }
        while(n%3==0)
        {
            n/=3;
            cnt_3++;
        }

        if(n != 1 || cnt_2>cnt_3)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<cnt_3-cnt_2+cnt_3<<"\n";
        }


    }
        
}