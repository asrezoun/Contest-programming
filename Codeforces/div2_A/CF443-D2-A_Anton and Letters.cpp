///scanf("%[^\n]",s);
///	getchar(); char array white space input

#include<iostream>
//#include<string>
//#include<cstring>

using namespace std;

int main()
{
    //char ch[1005];
    char value;
    int distinct=0,alphabet[26]={0};

    while((value=getchar())!='\n')
        {
            //ch[i++]=value;
            if(value>='a' && value<='z')
                {
                    alphabet[value-'a']+=1;
                }

        }
    for(int j=0;j<26;j++)
        {
            //cout<<i<<" is "<<ch[i]<<"\n";
            //cout<<alphabet[i]<<" ";
            if(alphabet[j]>0)
                distinct++;


        }
    cout<<distinct;
    return 0;

}
