#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int ar[4][4],total;

    char value;

    for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
                {
                    //scanf("%c",&value);
                    cin>>value;

                    if(value == '#')
                        ar[i][j]=1;
                    else
                        ar[i][j]=0;
                }
        }
        /*
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
                {
                    printf("%d ",ar[i][j]);
                }
                printf("\n");
        }*/

    for(int i=1;i<4;i++)
        {
            for(int j=1;j<4;j++)
                {
                    total = ar[i-1][j-1]+ ar[i-1][j]+ar[i][j-1]+ar[i][j];
                    //printf("%d ",total);
                    if(total != 2)
                        {
                            printf("YES");
                            return 0;
                        }

                }
        }
    printf("NO");
    return 0;

}
