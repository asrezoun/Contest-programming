#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,diff;
    bool check= false,horizontal= false, vertical = false , korno = false;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2)
        {
            check = true;
            vertical = true;
        }
    else if( y1 == y2)
        {
            check = true;
            horizontal = true;
        }
    else if( abs(x2-x1)== abs(y2-y1))
        {
            check = true;
            korno = true;
        }

    if(check==false)
        {
            cout<<"-1\n";
            return 0;
        }
    
    if(horizontal)
        {
            diff = abs(x2-x1);
            x3 = x1;
            x4 = x2;
            y3 = y4 = y1 + diff;
        }
    if(vertical)
        {
            diff = abs(y2-y1);
            y3 = y1;
            y4 = y2;
            x3 = x4 = x1+diff;
        }
    if(korno)
        {
            if(x1>x2 && y1>y2)
                {swap(x1,x2);swap(y1,y2);}

            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
}