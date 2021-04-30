#include<cstdio>

using namespace std;

int main()
{
    int n,k,range;

    scanf("%d %d",&n,&k);

    range = 2*n+1;

    int ar[range];

    for(int i=0;i<range;i++)
        {
            scanf("%d",ar+i);
        }

    for(int i=0;i<range;i++)
        {
            if(i%2==1 && ar[i]-ar[i-1]>1 && ar[i]-ar[i+1]>1)
                {
                    ar[i] -= 1;
                    k--;
                }
            if(k==0)
                break;

        }
        for(int i=0;i<range;i++)
            printf("%d ",ar[i]);

    return 0;

}
