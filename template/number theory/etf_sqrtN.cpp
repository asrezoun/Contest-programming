#include<bits/stdc++.h>
using namespace std;

int ETFsqrtN(int n)
    {
        int result = n;
        for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                    {
                        result /=i; ///eqn = n* {(i1-1)/i1}* {(i2-1)/i2} ///details code n code
                        result *= i-1;

                        while(n%i==0)
                            n/=i;
                    }
            }if(n>1)///means a prime is left out
                {
                    result /=n;
                    result *=(n-1);
                }

            return result;
    }
int main()
{
    int n;
    cin>>n;
    cout<<ETFsqrtN(n);

}
