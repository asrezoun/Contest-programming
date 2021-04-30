#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int w;
    cin>>w;
    bool flag = false;
    for(int i=2;i<w;i+=2)
        {
            int temp = w-i;
            if(temp %2==0)
                flag = true;
        }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}