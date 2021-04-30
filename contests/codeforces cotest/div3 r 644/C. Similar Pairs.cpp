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
    bool flag =true;
    cin>>t;

    while(t--)
        {
            int n,cnt=0,j;
            cin>>n;
            int a[n];

            int check[n] = {0};
            for(int i=0;i<n;i++)
                cin>>a[i];

            sort(a,a+n);

           // cout<<check[2];
           for(int i=0;i<n;i++)
            {
                //cout<<i<<" "<<check[i]<<" ch \n";
                if(check[i]==1)
                    continue;
                else
                    check[i]=1;
                for( j=0;j<n;j++)
                    {
                        if(check[j]==1)
                            continue;
                        else
                            {
                               if(a[i]%2==a[j]%2)
                                {
                                    cnt++;
                                    check[j] =1;
                                    break;
                                }

                                else if(abs(a[i]-a[j])==1)
                                    {
                                    cnt++;
                                    check[j] =1;
                                    break;
                                    }
                            }

                    }
                   // cout<<"step "<<i<<"i "<<j<<"j "<<cnt<<"\n";
            }
            //cout<<cnt;
            if(cnt==n/2)
                cout<<"YES\n";
            else
                cout<<"NO\n";


        }
return 0;

}
