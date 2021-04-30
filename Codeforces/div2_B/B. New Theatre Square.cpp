#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen( "input.txt" , "r" , stdin );
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,x,y,cost=0;
        cin>>n>>m>>x>>y;
        char c[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>c[i][j];
        }
        int dbl=y;
        if(2*x<y)
            dbl = 2*x;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;)
            {
                bool flag= false;
                if(c[i][j]=='.')
                {
                    if(j+1<m && c[i][j+1]=='.')
                    {
                        cost += dbl;
                        flag=true;
                    }
                    else
                    {
                        cost +=x;
                    }
                    
                }
                if(flag)
                    j+=2;
                else
                    j++;
                
            }
        }
        cout<<cost<<"\n";

    }
}