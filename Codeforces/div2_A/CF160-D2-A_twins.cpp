#include<cstdio>
#include<algorithm>

using namespace std;

inline bool compare(int a, int b)
    {
        return a>b;
    }

int main()
{
    int n,cn=0,sum=0,j;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
            sum += a[i];

        }

    sort(a,a+n,compare);
    sum = sum/2;
    //printf("%d",sum);
    for(j=0;j<n;j++)
        {
            cn += a[j];
            if(cn>sum)
                break;

        }
    printf("%d",++j);
    return 0;
}
