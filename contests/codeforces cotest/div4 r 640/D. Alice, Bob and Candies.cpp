#include<cstdio>

using namespace std;

int main()
{
    int t,n;

    scanf("%d",&t);

    while(t--)
        {
            scanf("%d",&n);
            int a[n];
            long alice=0,bob=0,temp=0,prev=0,k,j,step=0;
            for(int i=0;i<n;i++)
                {
                    scanf("%d",a+i);
                }

              j=0;k=n-1;
            while(1)
                {
                    if(j>k)
                        break;

                    if(step%2==0)
                        {
                            while(temp<=prev)
                                {
                                    alice += a[j];
                                    temp += a[j];
                                    j++;
                                    if(j>k)
                                        break;
                                }
                                prev = temp;
                                //printf("%d is alice %d\n",step,prev);
                                temp=0;
                                step++;

                        }
                    else if(step%2==1)
                        {
                            while(temp<=prev)
                                {
                                    bob += a[k];
                                    temp += a[k];
                                    k--;
                                     if(j>k)
                                        break;

                                }
                            prev = temp;
                           // printf("%d is bob %d\n",step,prev);
                            temp=0;
                            step++;
                        }

                }

                printf("%d %d %d\n",step,alice,bob);


        }
    return 0;


}
