#include<cstdio>

using namespace std;

int main()
{
    int n,value,pos=0,neg=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            scanf("%d",&value);
            if(value<0)
            {
                if(pos==0)
                    {
                        neg++;
                    }
                else
                    pos +=value;
            }
            else
            {
                pos += value;
            }

        }

        printf("%d",neg);

        return 0;

}
