#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char ch[204],last[204];
    char value;
    int len=0,j=0;

    scanf("%s",&ch);

    len = strlen(ch);

    for(int i=0;i<len;)
        {
            if(ch[i]=='W' && ch[i+1] == 'U' && ch[i+2] =='B')
                {
                    j++;
                    if(i>0 && j==1)
                        {
                            printf(" ");
                        }
                    i = i+3;

                }
                else
                    {
                        printf("%c",ch[i]);
                        j=0;
                        i++;
                    }

        }

return 0;
}
