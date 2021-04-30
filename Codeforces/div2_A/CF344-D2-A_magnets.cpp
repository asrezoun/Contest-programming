#include<iostream>



using namespace std;

int main()
{
    string x,y;
    int n,group=1;
    cin>>n;
     cin>>x;

    for(int i=0;i<n-1;i++)
        {

            cin>>y;
            if(x[1]==y[0])
                group++;

            x=y;

        }
    cout<<group<<"\n";

    return 0;



}
