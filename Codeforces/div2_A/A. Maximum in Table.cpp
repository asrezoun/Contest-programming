#include<bits/stdc++.h>
using namespace std;

int arr[12][12];
int main()
{
    int n;
    cin>>n;

    if(n==1)
        {cout<<n<<"\n";return 0;}
    
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                {
                    if(i==1 || j==1)
                        arr[i][j]=1;
                    else
                    {
                        arr[i][j]= arr[i-1][j]+arr[i][j-1];
                    }
                    
                }
        }
    // for(int i=1;i<=n;i++)
    //     {
    //         for(int j=1;j<=n;j++)
    //             cout<<arr[i][j]<<"    ";

    //         cout<<"\n";
    //     }
    
cout<<arr[n][n];
return 0;

}