#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
bitset<mx>b;
vector<int>primes;
void makePRIME()
    {
        for(int i=3;i*i<mx;i+=2)
            {
                if(b[i]==0)///means prime
                    {
                        for(int j=i*i;j<mx;j+=i+i)
                            b[j]=1;
                    }
            }
        primes.push_back(2);
        for(int i=3;i<mx;i+=2)
            {
                if(b[i]==0)
                    primes.push_back(i);
            }
    }
int divisorPRIME(int n)
    {
        makePRIME();
        int divisors =1;
        for(int i=0;i<primes.size();i++)
            {

                if(n<2)
                    break;
                int temp = primes[i];
                if(n%temp==0)
                    {
                        int cn=1;
                        while(n%temp==0)
                            {
                                cn++;
                                n/=temp;
                            }
                        divisors *= cn;
                    }
            }
            return divisors;

    }
int main()
{
    int n;
    cin>>n;
    cout<<divisorPRIME(n);
}
