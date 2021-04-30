#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n,x;
    char ch[105];

    scanf("%d",&n);

    while(n--)
        {
            scanf("%s",&ch);
            x=strlen(ch);

            if(x>10)
                {
                    printf("%c%d%c\n",ch[0],x-2,ch[x-1]);
                }
            else
                {
                    printf("%s\n",ch);
                }

        }
    return 0;

}

