#include<cstdio>
#include<algorithm>

using namespace std;

inline bool compare(int a, int b)
    {
        return a>b;
    }

int main()

{
    int t;
    scanf("%d",&t);

    while(t--)
        {
            int n,k,sum=0;
            scanf("%d %d",&n,&k);
            int a[n],b[n];

            for(int i=0;i<n;i++)
                {
                    scanf("%d",a+i);
                }
            for(int i=0;i<n;i++)
                {
                    scanf("%d",b+i);
                }
        ///input done

            sort(a,a+n);
            sort(b,b+n,compare);

            for(int i=0;i<k;i++)
                {
                    if(b[i]>a[i])
                        a[i]= b[i];
                }
            for(int i=0;i<n;i++)
                sum += a[i];

            printf("%d\n",sum);

        }
return 0;

}
