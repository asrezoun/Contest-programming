#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int final[n+1]={0};
    int p,q,temp;
    cin>>p;
    for(int i=0;i<p;i++)
        {cin>>temp; final[temp]=1;}
    cin>>q;
    for(int i=0;i<q;i++)
        {cin>>temp; final[temp]=1;}

    bool flag=true;

    for(int i=1;i<=n;i++)
        {
            if(final[i]==0)
                flag=false;
        }
    if(flag)
        cout<<"I become the guy.\n";
    else
    {
        cout<<"Oh, my keyboard!\n";
    }

return 0;
    
}