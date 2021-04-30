#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int a[5]={0};
    int calorie=0;
    char ch[100003];

    //printf("%d",a[3]);

    for(int i=1;i<5;i++)
    {
        scanf("%d",a+i);
    }

    //cin>>s;
    scanf("%s",&ch);

    for(int i=0;i<strlen(ch);i++)
        {
            calorie += a[ch[i]-'0'];
        }

    printf("%d",calorie);

}
