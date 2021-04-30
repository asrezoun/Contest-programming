#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>initial(n+1);
    vector<int>amount(4,0);
    int prog[n+1]={0},math[n+1]={0},pe[n+1]={0};
    int minimum,p=0,m=0,ph=0;

    for(int i=1;i<n+1;i++)
        {
            cin>>initial[i];

            amount[initial[i]]++;
            if(initial[i]==1)
                    prog[p++] = i;
            else if(initial[i]==2)
                    math[m++] = i;
            else if(initial[i]==3)
                    pe[ph++] = i;
        }
        /*
    for(int i=0;i<4;i++)
        cout<<amount[i]<<" ";*/

    minimum = *min_element(amount.begin()+1,amount.end());
    cout<<minimum<<"\n";
/*
    for(int i=0;i<n+1;i++)
        {
            cout<<prog[i]<<" ";
        }
        cout<<"\n";
    for(int i=0;i<n+1;i++)
        {
            cout<<math[i]<<" ";
        }
        cout<<"\n";
    for(int i=0;i<n+1;i++)
        {
            cout<<pe[i]<<" ";
        }
        cout<<"\n";*/
    for(int i=0;i<minimum;i++)
        {
            cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<"\n";
        }

}
