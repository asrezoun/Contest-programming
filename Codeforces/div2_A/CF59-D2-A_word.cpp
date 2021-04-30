#include<cstdio>
#include<cstring>
#include<cctype>
//#include<iostream>

using namespace std;

int main()
{
    char ch[101];
    int small=0,capital=0;
    scanf("%s",&ch);

    for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]>='a')
                ++small;
            else
                ++capital;

        }

        //cout<<small<<" "<<capital<<endl;
    for(int i=0;i<strlen(ch);i++)
        {
            if(capital>small)
                ch[i] = toupper(ch[i]);
            else
                ch[i] = tolower(ch[i]);
        }
    printf("%s",ch);


}
