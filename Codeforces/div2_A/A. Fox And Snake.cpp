#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        int k=0;
        for(int j=1;j<=m;j++)
            {
                if(i%2==1)
                {
                    cout<<"#";
                }
                else if(flag ==true and i%2==0 and j==m and k==0)
                    {cout<<"#"; flag =false; k++;}
                else if(flag ==false and i%2==0 and j==1 and k==0)
                    {cout<<"#"; flag = true; k++;} 
                else
                {
                    cout<<".";
                }
                
            }
        cout<<"\n";
    }

}