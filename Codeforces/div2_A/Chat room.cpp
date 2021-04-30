#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    string input;
    int j=0,k=0;

    cin>>input;
    int len = input.length();
    bool flag = false;

    for(int i=0;i<len;i++)
        {
            if(input[i]==s[j])
                {
                    j++;
                    if(j>4)
                        {
                            flag=true;
                            break;
                        }
                }
        }
        if(flag)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
}