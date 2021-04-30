#include<cstdio>

using namespace std;

int main()
{
    int n,m,prime=0;
    bool flag = false;

    scanf("%d %d",&n,&m);

    for(int i = n+1;i<=m;i+=2)
        {
            for(int j=2;j*j<=m;j++)
                {
                    if(i%j != 0)
                        {
                            flag = true;
                            prime = i;
                            break;
                        }
                }
                if(flag)
                    break;


        }

        if(prime ==m)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;

}
