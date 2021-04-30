#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
#define Size 100005
///coding blocks pigeonhole youtube video.. how many sub arrays possible such that sum is divisible by n
int main()
{
    ll ar[Size], cnt[Size];


    int t;
    cin>>t;

    while(t--)
        {
            int n;
            cin>>n;
            memset(cnt,0,sizeof(cnt));
            cnt[0] =1; /// if null array then 0 is atleast one
            ll sum =0;
            for(int i=0;i<n;i++)

                {
                    cin>>ar[i];
                    sum +=ar[i];

                    sum = (sum%n + n) %n; ///incase negative
                    cnt[sum]++;

                }

            ll ans =0;
            for(int i=0;i<n;i++)
                {
                    ll temp = cnt[i];
                    ans += (temp* (temp-1))/2; ///nc2
                }
               cout<<ans<<"\n";

        }


}
