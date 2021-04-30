#include<bits/stdc++.h>
using namespace std;
int a, b, c;

int bsearch()
{
    int low =0;
    int temp = (a*c)-(b*c);
    int hi = ((a*c)/b)+1;

    while(low <= hi)
    {
        int mid = (low + hi)/2;
        int temp2 = mid*b;
        int temp3 = (mid-1)*b;
        if(temp2>= temp && temp3< temp)
            return mid;

        else 
            {
                if(temp2>temp)
                    hi = mid-1;
                else 
                    low = mid +1; 
            }

    }
}
int main()
{
    cin>>a>>b>>c;

    cout<<bsearch()<<"\n";
}