#include<iostream>
using namespace std;

int main()
{
    int limit =0,n,k;
    char ch;

    cin>>n>>k;

    for(int i=0;i<n;i++)
        {
            if(limit>k-1)
                limit =0;

            ch = 'a'+limit++;
            cout<<ch;
        }

}
