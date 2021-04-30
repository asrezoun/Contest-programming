#include<iostream>
#include<set>

using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2;
    set<int>s;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    int x,a,b,c;

    x = (d1-r2+c1)/2;
    a = r1 -x;
    b = c1-x;
    c = r2-c1+x;
    s.insert(x);
    s.insert(a);
    s.insert(b);
    s.insert(c);

    if(s.size() != 4||x<1||x>9||a<1||a>9||b<1||b>9||c<1||c>9)
        cout<<"-1";
    else
        cout<<x<<" "<<a<<"\n"<<b<<" "<<c;




}
