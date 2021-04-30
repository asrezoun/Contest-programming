#include<cstdio>
#include<vector>
#include<utility>
#include<iostream>

using namespace std;

int main()
{
    int n,distressed=0;
    long long iceCream;
    //scanf("%d %ld",&n,&iceCream);
   // vector<pair<char,long>>v(n);
    cin>>n>>iceCream;
    char sign;
    long long quantity;

    //cout<<n<<" "<<iceCream<<"\n";
    while(n--)
    {
        cin>>sign>>quantity;
        if(sign=='+')
                iceCream += quantity;
        else if(sign=='-')
            {
                if(iceCream<quantity)
                    distressed++;
                else
                    iceCream-=quantity;

            }
    }
    cout<<iceCream<<" "<<distressed;
    return 0;


}
