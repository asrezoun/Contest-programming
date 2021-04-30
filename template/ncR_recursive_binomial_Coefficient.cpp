#include<iostream>
using namespace std;
///youtube geeksForgeeks video binomial coeffecient
///simulation available there for n=4 k=2
///problem using this--> same calculation again and again
/// solution--> using dynamic programming available in the same video

int ncR(int n,int k)
    {
        if(k==0||n==k)
            return 1; ///base case

        return ncR(n-1,k-1)+ncR(n-1,k);
    }

int main()
{
    int n,k;

    cin>>n>>k;

    cout<<ncR(n,k);

}
