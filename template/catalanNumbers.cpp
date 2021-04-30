#include<iostream>

using namespace std;
/// 1/n+1 * 2nCn
int catalan(int n)
    {
        if(n<=1)
            return 1;
        int res=0;
        for(int i=0;i<n;i++)
            res += catalan(i)*catalan(n-i-1);

        return res;

    }

int main()
{
    int n;

    cin>>n;
    //int a[n+1];

    for(int i=0;i<=n;i++)
        {

            cout<<catalan(i)<<" ";

        }

}
