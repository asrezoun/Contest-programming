#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        char c[n][n];
        int a[n][n];

        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    a[i][j]=0;
            }

        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        cin>>c[i][j];
                    }
            }

        ///mark
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        if(c[i][j]=='X')
                            a[i][j] +=1;

                        if(c[j][i]=='X')
                            a[j][i]+=1;
                    }
            }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
        
    }
}