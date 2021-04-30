#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char value;
    bool color = false;
    char ch[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    //value = getchar();
                    cin>>ch[i][j];
                    //scanf("%c",&ch[i][j]);
                    //cout<<ch[i][j]<<endl;
                    value = ch[i][j];
                    if(value=='C'||value=='M'||value=='Y')
                        color = true;
                }

        }
        if(color)
            printf("#Color");
        else
            printf("#Black&White");
    return 0;

}
