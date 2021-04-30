#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
    {
        if(b==0)
            return a;
        gcd(b,a%b);
    }
int main()
{
    int a=0,b;
    string s;
    cin>>s;
    cin>>b;
    int ln = s.length();
   // cout<<ln;
    for(int i=0;i<ln;i++)
        {
            int temp = s[i]-'0';
            a = (a*10+temp)%b;
        }
        //cout<<a;
    //cin>>a>>b;
    cout<<gcd(a,b);
}
