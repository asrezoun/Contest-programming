#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c;
    cin>>s;
    int len= s.length();
    //cout<<len;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O'|| s[i]=='U'|| s[i]=='Y'||s[i]=='a'|| s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u'|| s[i]=='y')
            continue;
        c = s[i];
        if(s[i]>='A' && s[i]<'a')
            c = s[i] + ('a'-'A');
        cout<<"."<<c;

        
    }

}