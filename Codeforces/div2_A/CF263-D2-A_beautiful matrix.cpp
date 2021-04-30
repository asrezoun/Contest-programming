#include<cstdio>
using namespace std;

int main()
{
    int a[5][5];
    int x,y,step=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);

            if(a[i][j]==1)
                {
                   x =i;
                   y=j;
                }
        }
    }
    while(1)
        {
            if(x==2 && y==2)
                break;

            if(x>2)
            {
                a[x][y]=0;
                a[--x][y]=1;
            }
            else if(x<2)
            {
                a[x][y]=0;
                a[++x][y]=1;
            }
            else if(y>2)
            {
                a[x][y]=0;
                a[x][--y]=1;
            }
            else if(y<2)
            {
                a[x][y]=0;
                a[x][++y]=1;
            }

            ++step;

        }
        printf("%d",step);
        return 0;
}
