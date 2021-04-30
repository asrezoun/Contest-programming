#include<cstdio>
#include<vector>
#include<utility>

using namespace std;

int main()
{
    int n,m,wire,fromLeft,x,y;
    scanf("%d",&n);
    int a[n+1];


    for(int i=1;i<n+1;i++)
        {
            scanf("%d",a+i);

        }
    scanf("%d",&m);
    vector<pair<int,int>>p(m+1);
    for(int i=1;i<m+1;i++)
        {
            scanf("%d %d",&wire,&fromLeft);
            p[i].first = wire;
            p[i].second = fromLeft;

        }

    ///all input done

    for(int i=1;i<m+1;i++)
        {
            x = p[i].first;
            y = p[i].second;

            if(x>1 && x<n)
            {
                a[x-1] += (y-1);
                a[x+1] += (a[x]-y);
                a[x]=0;
            }
            else if(p[i].first==1)
                {
                    a[x+1] += (a[x]-y);
                    a[x]=0;

                }
            else if(p[i].first == n)
                {
                    a[x-1] += (y-1);
                    a[x]=0;
                }

        }

        for(int i=1;i<n+1;i++)
            {
                printf("%d\n",a[i]);
            }
        return 0;


}
