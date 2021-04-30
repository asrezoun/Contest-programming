#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    string a,b;

    cin>>a>>b;
    int len1,len2,mi,ma;
    bool flag = false;

    len1 = a.length();
    len2 = b.length();

    mi = min(len1,len2);
    ma = max(len1,len2);

    //cout<<len1<<" "<<len2;

    for(int i=0;i<mi;i++)
        {
            if(a[i] != b[i])
                {
                    flag = true;
                    break;
                }

        }


        if(flag||ma>mi)
            cout<<ma;
        else
            cout<<"-1";

        return 0;




}
