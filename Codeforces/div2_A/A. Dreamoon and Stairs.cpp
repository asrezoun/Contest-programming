#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,temp,res;
    cin>>n>>m;

    temp = n/2;
    res = temp;
    if(n%2==1)
        temp++;
    bool flag = false;
    while(1)
        {
            if(temp%m==0)
                {
                    flag = true;
                    break;
                }
            else
            {
                temp++;
                res--;
            }
        if(res<=0)
            break;
            
        }
    if(temp%m==0)
        flag= true;
    if(n<m)
        flag= false;
    if(flag)
        cout<<temp<<"\n";
    else
    {
        cout<<"-1\n";
    }
    return 0;
    
}