#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;

    while(1)
    {
        cnt++;
        n--;m--;

        if(n*m==0)
            break;
    }
    if(cnt % 2==0)
        cout<<"Malvika\n";
    else
    {
        cout<<"Akshat\n";
    }

    return 0;
    
}