#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int wheel=0,temp;
    char c[101];
    char x;

    scanf("%s",&c);
    x = 'a';

    for(int i=0;i<strlen(c);i++)
    {
        temp = c[i]-x;
        x = c[i];
       // printf("%c =%d  ",c[i],temp);
        if(temp<0)
            temp *= -1;
        if(temp>13)
            temp = 26 -temp;


        wheel += temp;

    }

    printf("%d",wheel);
    return 0;


}
