#include<bits/stdc++.h>

using namespace std;

int main()
{
    string allowed, c;
    vector<string>words;

    int n;
    cin>>n;
    cin>>allowed;
    for(int i=0;i<n;i++)
        {
            cin>>c;
            words.push_back(c);
        }
    int al = allowed.length();
        
        int cn=0;
        bool flag = false;
        
        for(int i=0;i<words.size();i++)
        {
            int temp = words[i].length();
            //cout<<"temp "<<temp<<"\n";
            string check = words[i];
            //flag = false;
            bool secFlag = true;
            for(int j=0;j<temp;j++)
            {
                flag = false;
                cout<<check<<temp<<" \n";
                for(int k=0;k<al;k++)
                {
                    if(check[j]==allowed[k])
                    {flag = true;  break;}
                }
                
                if(flag==false)
                {secFlag = false; break;}
            }
            if(secFlag)
                cn++;
        }
        cout<<cn<<"\n";
}