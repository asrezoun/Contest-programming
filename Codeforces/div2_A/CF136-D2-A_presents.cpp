#include<cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1];

    for(int i=1;i<n+1;i++)
        {
            scanf("%d",a+i);
            b[a[i]] = i;
        }
    for(int i=1;i<n+1;i++)
                printf("%d ",b[i]);

    return 0;


}
