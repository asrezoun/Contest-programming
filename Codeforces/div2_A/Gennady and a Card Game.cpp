#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char a,b;
    cin>>s;
    a = s[0];b=s[1];
    bool flag= false;
    for(int i=1;i<=5;i++)
        {
            cin>>s;
            if(s[0]==a||s[1]==b)
                flag=true;
        }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
