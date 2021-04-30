#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a ==1 and c==1)
        cout<<a+b+c;
    else if(a == 1)
        cout<<(a+b)*c;
    else if (b==1)
        cout<< ( b + min(a,c))*max(a,c);
    else if(c==1)
        cout<<a*(b+c);
    else
        cout<<a*b*c;

    
}
 
