#include<cstdio>

using namespace std;

int main()
{
    int n,t;

    scanf("%d %d",&n,&t);

    ///cases t=10 or less if 10=> digit 1 then no result print -1 else n-1 1's and a 0 // or n no of t's

    if(t%10==0 && n==1)
        printf("%d",-1);
    else if(t%10 ==0 && n>1)
        {
            for(int i=0;i<n-1;i++)
                printf("%d",1);
            printf("%d",0);

        }
    else
        {
            for(int i=0;i<n;i++)
                printf("%d",t);

        }
    return 0;

}
