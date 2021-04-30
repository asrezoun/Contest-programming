#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt" , "r" , stdin);
    int t;
    cin>>t;

    label:
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        bool flag=false;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>ar[i][j];
        }

        //check value greater than 4
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]>4)
                {
                    cout<<"NO\n";
                    goto label;
                }


                if(ar[i][j]>2 && ((i==0 && j==0)|| (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1) ))
                {
                    cout<<"NO\n";
                    goto label;
                }

                if(ar[i][j]>3 && (i==0 || i==n-1 || j==0 || j==m-1))
                {
                    cout<<"NO\n";
                    goto label;
                }
                //check done

                if((i==0 && j==0)|| (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1))
                    ar[i][j]=2;
                else if(i==0 || i==n-1 || j==0 || j==m-1)
                    ar[i][j]=3;
                else
                    ar[i][j]=4;
                
            }
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cout<<ar[i][j]<<" ";
                }
                cout<<"\n";
        }
        //
        

    }
}