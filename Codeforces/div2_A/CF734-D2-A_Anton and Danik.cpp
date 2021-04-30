#include<cstdio>
#include<iostream>

using namespace std;


int main()
{
    int n, ca=0,cd=0;
    scanf("%d",&n);

    char a[n];

    for(int i=0;i<n;i++)
    {
        //printf("check\n");
        //scanf("%c",&a[i]);
        cin>>a[i];
        if(a[i]=='A')
            ca++;
        else if(a[i]=='D')
            cd++;

    }

    if(ca>cd)
        printf("Anton");
    else if(ca<cd)
        printf("Danik");
    else if(ca==cd)
        printf("Friendship");

    return 0;

}
