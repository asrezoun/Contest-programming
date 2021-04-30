#include<bits/stdc++.h>
using namespace std;
int divisorSQRTN(int n)
    {
        int divisors=0;

        for(int i=1;i*i<=n;i++)
            {
                if(i*i==n)///if perfect square
                    divisors++;
                else if(n%i==0)
                    divisors+=2;
            }
        return divisors;
    }
int main()
{
    int n;
    cin>>n;
    cout<<divisorSQRTN(n);

}
