#include<cstdio>

using namespace std;

int main()
{
    int step,mode,i;
    int seed[100004];

    while(scanf("%d %d",&step,&mode)==2)
        {
            seed[0] = step%mode;
            i=1;
            while(1)
                {
                    seed[i] = (seed[i-1]+step)%mode;
                    if(seed[i]==seed[0])
                        break;
                    i++;

                }
            if(i==mode)
                printf("%10d%10d     Good Choice\n\n",step,mode);
            else
                printf("%10d%10d     Bad Choice\n\n",step,mode);

        }
        return 0;

}
