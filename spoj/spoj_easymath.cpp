#include<iostream>

using namespace std;

int main()
{
    int n,m,a,d,t;
    cin>>t;


    while(t--)
        {
            cin>>n>>m>>a>>d;
            int cn=0;
            int j=0;

                for(int i=n;i<=m;i++)
                    {
                        if(i%a!=0 && i%(a+d)!=0 && i%(a+2*d)!=0 && i%(a+3*d)!=0 && i%(a+4*d)!=0)
                            cn++;
                    }
                cout<<cn<<endl;

        }

}
