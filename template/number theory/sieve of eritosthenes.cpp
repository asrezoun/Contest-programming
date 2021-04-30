#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxN = 10000000;
ll marked[10000000];
bool isPrime(ll n)
    {
        if(n<2)
            return false;
        else if(n==2)
            return true;
        else if(n%2==0)
            return false;
        else if(marked[n]) ///considerd 1 as non prime
            return false;
        else
            return true;
    }
void sieveAlgo()
    {
       for(ll i=3;i*i<=maxN;i+=2)
            {
                if(marked[i]==0)
                    {
                        for(ll j=i*i;j<=maxN;j+=i)
                            {
                                marked[j]=1;
                            }
                    }
            }
    }
int main()
{
    ll n,t;
    cin>>t;
    //ll ar[n+1]={0};
    ///0 means prime 1-not prime
    sieveAlgo();
    while(t--)
        {
            cin>>n;
            if(isPrime(n))
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
return 0;
}
