#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,p,q,j=0,k=0,cn=0;
    bool flag = false;

    scanf("%d",&n);

    scanf("%d",&p);
    int a[p];
    for(int i=0;i<p;i++)
        {
            scanf("%d",a+i);

        }

    scanf("%d",&q);
    int b[q];
    for(int i=0;i<q;i++)
        {
            scanf("%d",b+i);

        }

    int l= p+q;
    int c[l]={0},d[l]={0};

    for(int i=0;i<l;i++)
        {
            if(j<p)
                {
                    c[i] = a[j];
                    j++;
                }
            else
                {
                    c[i] = b[k];
                    k++;
                }
        }


    sort(c,c+l);
        for(int i=0;i<l-1;i++)
            {
                d[i] = c[i+1]-c[i];
            }
        for(int i=0;i<l;i++)
            {
                if(d[i]>1)
                        break;
                else if(d[i]==1)
                    cn++;
                flag = true;

            }
        if(cn == (n-1)&&flag)
            printf("I become the guy.");
        else
            printf("Oh, my keyboard!");
    return 0;

}
