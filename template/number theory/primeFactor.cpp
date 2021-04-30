#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n)
    {
        for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                    {
                        int cn=0;
                        while(n%i==0)
                            {
                                cn++;
                                n/=i;
                            }
                        cout<<i<<"^"<<cn<<"\n";
                    }

            }
            if(n>1)
                cout<<n<<"^"<<1<<"\n";
    }
int main()
{
    int n;
    cin>>n;
    primeFactor(n);

    return 0;
}
