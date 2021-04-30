#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen( "input.txt" , "r" , stdin );
    int t,n,m;
    cin>>t;
    int ar[105],br[105];
    
    while(t--)
        {
            int cnt =0;
            cin>>n>>m;
        
            for(int i=0;i<n;i++)
                cin>>ar[i];
            for(int j=0;j<m;j++)
                cin>>br[j];

            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                        {
                            if(ar[i]==br[j])
                                cnt++;
                        }
                }
             cout<<cnt<<"\n";   

        }    
}