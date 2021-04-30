#include<bits/stdc++.h>
using namespace std;
char c[110][110];
int n;
int check(int i, int j)
{
    int cnt = 0;
    if(i-1>=0) 
    {
        if(c[i-1][j]=='o') cnt++;
    }
    if(i+1<=n)
    {
        if(c[i+1][j]=='o') cnt++;
    }
    if(j-1>=0)
    {
        if(c[i][j-1]=='o') cnt++;
    }
    if(j+1<=n)
    {
        if(c[i][j+1]=='o') cnt++;
    }

    return cnt;


}

int main()
{
    //int n;
    cin>>n;

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    cin>>c[i][j];
                }
        }
    bool flag = false;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(check(i,j) % 2 !=0)
                        {
                            flag = true;
                            break;
                        }
                }
        }
    if(flag)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
}