#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,x=0;
    scanf("%d",&n);
    char ch[n];

    scanf("%s",&ch);

    for(int i=0;i<n-1;i++)
    {
        if(ch[i]==ch[i+1])
            x++;
    }
    printf("%d",x);
    return 0;
}
