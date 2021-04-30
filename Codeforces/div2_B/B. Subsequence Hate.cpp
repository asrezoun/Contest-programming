#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //freopen( "input.txt" , "r" , stdin );
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        ll len = s.length();
        ll x[len+1],y[len+1];

        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));

        for(ll i=0;i<len;i++)
        {
            if(i==0)    x[i]= (ll)s[i]-'0';
            else
            {
                x[i]=x[i-1];
                x[i]+=((ll)s[i]-'0');
            }
            
        }

        for(ll i=len-1;i>=0;i--)
        {
            if(i==len-1)  y[i]= (ll)s[i]-'0';
            else
            {
                y[i]=y[i+1];
                y[i]+=((ll)s[i]-'0');
            }
            
        }
        ///pref suff done
        ll res=INT_MAX;
        for(ll i=0;i<=len-1;i++)
        {
            res = min(res, i+1-x[i]+y[i+1]);
            res = min(res, x[i]-y[i+1]+len-i-1);
        }
        cout<<res<<"\n";
    }
}