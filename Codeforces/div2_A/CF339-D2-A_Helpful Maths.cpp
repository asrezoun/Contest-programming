#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    //char ch[104],last[104];
    vector<char>ch;
    char value;
    int i=0,len,newLen=0,k=0;
    while((value=getchar())!='\n')
        {
            if(value != '+')
                ch.push_back(value);
        }
    //len = strlen(ch);

    sort(ch.begin(),ch.end());


    newLen = ch.size();
    //cout<<len<<endl<<ch<<endl<<newLen<<endl;

    for(int x=0;x<newLen;x++)
        {
            if(x!=newLen-1)
                {
                    cout<<ch[x];
                    cout<<"+";
                }
            else
                cout<<ch[x];
        }
    return 0;


}
