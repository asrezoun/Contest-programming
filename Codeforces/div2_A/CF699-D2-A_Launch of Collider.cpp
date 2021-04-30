#include<cstdio>
#include<climits>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int n,minimum=INT_MAX,temp =0;
    scanf("%d",&n);
    char ar[n];
    int position[n];
    bool flag =false;

    scanf("%s",&ar);

    for(int i=0;i<n;i++)
        scanf("%d",position+i);

    for(int i=0;i<n-1;i++)
        {
            if(ar[i]=='R' && ar[i+1]=='L')
                {
                    temp = (position[i+1]-position[i])/2;
                    //cout<<temp<<endl;
                    minimum = min(minimum,temp);
                    flag = true;
                }

        }
    if(flag)
        {
            printf("%d",minimum);
        }
    else
        printf("%d",-1);

    return 0;


}
