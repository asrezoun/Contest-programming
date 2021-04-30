#include<cstdio>

using namespace std;

bool sortedOrnot(int a[],int n)
{
    if(n==1||n==0)
        return true;
    if(a[n-2]<a[n-1]) //decreasing order check
        return false;

    return sortedOrnot(a,n-1);

}

int main()
{
    int n;
    scanf("%d",&n);
    int start[n],endd[n],check;
    bool flag = false;

    for(int i=0;i<n;i++)
        {
            scanf("%d %d",start+i,endd+i);
        }
    for(int i=0;i<n;i++)
        {
            check = endd[i]-start[i];

            if(check !=0)
                {
                    flag = true;
                    break;
                }

        }
    if(flag)
    {
        printf("rated");
    }
    else
    {
        if(sortedOrnot(start,n))
            {
                printf("maybe");
            }
        else
            {
                printf("unrated");
            }
    }
    return 0;

}
