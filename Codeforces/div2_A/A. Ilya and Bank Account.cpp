#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;

    cin>>s;
    int len = s.length();
    //cout<<len<<"\n";

    if(s[0] != '-')
        {
            cout<<s<<"\n";
            return 0;
        }
    if(s[0]=='-' and len==3 and s[len-1]=='0')
        {
            cout<<"0\n";
            return 0;
        }
    for(int i=0;i<len-2;i++)
        {
            cout<<s[i];
        }
    if(s[len-1]<s[len-2])
        cout<<s[len-1];
    else
    {
        cout<<s[len-2];
    }
    
}