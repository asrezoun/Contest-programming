#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,7,44,47,74,77,444,447,474,477,777,774,747,744};

    int input,temp;
    bool flag = false;

    cin>>input;

    for(int i=0;i<14;i++)
    {
        temp = input/arr[i];

        if(arr[i]*temp == input)
            {
                flag = true;
                break;
            }
    }
    if(flag)
        cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    return 0;
    
}