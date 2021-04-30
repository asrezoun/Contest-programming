#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int len = s.length();
    //bool flag = false;
    int j=0;

    for(int i=0;i<len;)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            {
                j++;
                if(i>0 && j==1)
                    cout<<" ";

                i+=3;
            }
        else
        {
            cout<<s[i];
            i++;
            j=0;
        }
        
    }
}