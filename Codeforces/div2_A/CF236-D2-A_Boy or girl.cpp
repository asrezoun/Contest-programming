#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int cnt[100];

int main()
{
    char ch[101];
    int letter=0;

    cin>>ch;

    for(int i=0;i<strlen(ch);i++)
    {
        cnt[ch[i]-97] += 1;

    }

    for(int i =0;i<26;i++)
    {
        if(cnt[i]>0)
            letter++;
          // cout<<cnt[i]<<" ";
    }

    if(letter%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

}

