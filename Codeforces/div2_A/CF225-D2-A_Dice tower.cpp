#include<iostream>
#include<utility>

using namespace std;

int main()
{
    int n;
    int top,bottom;
    cin>>n;
    cin>>top;
    bottom = 7-top;

    int x,y;
    cin>>x>>y;
    ///top cube done
    pair<int,int>p;
    bool flag =false;

    for(int i=2;i<=n;i++)
        {
            bool check[7]={false};
            cin>>x>>y;
            check[x]=check[y]=check[7-x]=check[7-y]=true;

            for(int i=1;i<7;i++)
                {
                    if(check[i]==false)
                        {
                            p.first = i;
                            p.second = 7-i;
                            break;
                        }
                }

                if(p.first == bottom || p.second==bottom)
                    {
                        if(p.first == bottom)
                            bottom = p.second;
                        else
                            bottom = p.first;
                    }
                else
                    {
                        flag =true;
                    }

        }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
    return 0;


}
