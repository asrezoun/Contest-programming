#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen( "input.txt" , "r" , stdin );
    int t;
    cin>>t;

    while(t--)
        {
            int n;
            vector<char>s;
            char c;
            cin>>n;

            for(int i=0;i<n;i++)
                {
                    cin>>c;
                    s.push_back(c);
                }
            sort(s.begin(),s.end());
            
            for(int i=0;i<n;i++)
                {
                    cout<<s[i];
                }
            cout<<"\n";


        }
    return 0;
}