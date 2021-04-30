#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
    char ar[] ="qwertyuiopasdfghjkl;zxcvbnm,./";
    char s[104],b[104];
    char c;
    int l1,l2;
    scanf("%c",&c);

    scanf("%s",&s);

    l1 = strlen(s);
    l2 = strlen(ar);


    //printf("is %c",ar[3]);

    for(int i=0;i<l1;i++)
        {
            //printf("%d",strlen(s));
            for(int j=0;j<l2;j++)
                {

                    if(c=='L')
                        {
                           if(s[i]==ar[j])
                                b[i] = ar[j+1];
                        }
                    else if(c=='R')
                        {
                            if(s[i]==ar[j])
                                b[i] = ar[j-1];
                        }
                }

        }
       // printf("%s",b);
        for(int i=0;i<l1;i++)
            {
                printf("%c",b[i]);
            }



}
