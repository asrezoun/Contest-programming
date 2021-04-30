#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--)
        {
            int n,ans=0,mini=INT_MAX;
            cin>>n;
            int a[n];

            for(int i=0;i<n;i++)
            {cin>>a[i];}


            sort(a,a+n);

            for(int i=0;i<n-1;i++)
                {
                    ans = a[i+1]-a[i];
                    mini = min(ans,mini);
                }
            cout<<mini<<"\n";
        }
return 0;

}
