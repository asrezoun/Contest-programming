#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t,input,cn,rem,div,rem2,cn2;
    scanf("%d",&t);

    while(t--)
        {
            scanf("%d",&input);
            cn =0;
            div =input;
            cn2=0;

            while(1)
                {
                    rem2 =div%10;
                    div =div/10;

                    if(rem2>0)
                        cn2++;
                    if(div==0)
                        break;

                }
            printf("%d\n",cn2);
            while(1)
                {
                    rem = input%10;
                    input = input/10;


                    if(rem>0)
                        {
                            rem = rem*pow(10,cn);
                            printf("%d ",rem);
                        }
                    if(input==0)
                        break;
                    cn++;
                }
                printf("\n");

        }
    return 0;

}
