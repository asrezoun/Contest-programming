///check and go

#include<cstdio>

using namespace std;

int main()
{
    int n,next,flag;
    scanf("%d",&n);

    int ar[n+1] = {0};
    flag =n;

    for(int i=1;i<=n;i++)
        {
            scanf("%d",&next);
            ar[next] =1;

            while(1)
                {
                    if(ar[flag]==1)
                        {
                            printf("%d ",flag);
                            flag--;
                        }
                    else
                        {
                            printf("\n");
                            break;
                        }


                }
        }
    return 0;
}
