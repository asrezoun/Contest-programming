#include<bits/stdc++.h>
using namespace  std;

char sit[1005][5];
int ar[]={0,3};
int main()
{
    int n;
    bool flag = false;
    cin>>n;

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
                cin>>sit[i][j];
        }

    for(int i=0;i<n;i++)
    {
        for(int next:ar)
            {
                if(sit[i][next]=='O' && sit[i][next+1]=='O')
                    {
                        sit[i][next]='+';
                        sit[i][next+1]='+';

                        flag = true;
                        break;
                    }
            }
            if(flag)
                break;
    }
    if(!flag)
        {cout<<"NO\n"; return 0;}
    
    cout<<"YES\n";
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
                cout<<sit[i][j];
            cout<<"\n";
        }
}
