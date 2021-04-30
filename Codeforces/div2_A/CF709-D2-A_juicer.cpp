#include<cstdio>

using namespace std;

int main()
{
    int n,b,d,waste =0,out=0;

    scanf("%d %d %d",&n,&b,&d);
    int a[n];

    for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
        }
    ///input done

    for(int i=0;i<n;i++)
    {
        if (a[i]<= b)
            {
                waste += a[i];

                if(waste>d)
                    {
                        out++;
                        waste =0;
                    }
            }

    }
    printf("%d",out);
    return 0;
}
