#include<bits/stdc++.h>
using namespace std;
int extended_euclid(int a,int b,int &x,int &y)
    {
        ///corner case
        if(b==0)
            {
                x=1;
                y=0;
                return a;
            }
        int x1,y1;
        int d=extended_euclid(b,a%b,x1,y1);
        x = y1;
        y = x1-y1*(a/b);
        //cout<<"d"<<d<<"\n";
        return d;
    }

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    cout<<extended_euclid(a,b,x,y);
    cout<<"x "<<x<<" y "<<y;


}
