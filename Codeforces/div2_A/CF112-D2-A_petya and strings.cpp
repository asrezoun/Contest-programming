#include<iostream>
#include<cctype>

using namespace std;


int main()
{
    char value;
    int sum1=0,sum2=0;
    bool flag= false;

    char ch1[100],ch2[100];
    int i=0,j=0;

    while((value=getchar())!='\n')
        {
            ch1[i++]= tolower(value);
        }
    while((value=getchar())!='\n')
        {
            ch2[j++]= tolower(value);
        }
    for(int k=0;k<i;k++)
        {
            if(ch1[k]<ch2[k])
                {
                    flag = true;
                    cout<<"-1";
                    break;
                }
            else if(ch1[k]>ch2[k])
                {
                    flag = true;
                    cout<<"1";
                    break;
                }

        }
        if(!flag)
            cout<<"0";

        return 0;





}
