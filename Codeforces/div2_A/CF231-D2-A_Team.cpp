#include<cstdio>
using namespace std;

int main()
{
    int x,y,z,n,solve=0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y+z>=2)
        {
            solve++;
        }

    }
    printf("%d",solve);
    return 0;

}
