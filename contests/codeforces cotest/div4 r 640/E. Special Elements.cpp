#include<cstdio>

using namespace std;

int main()
{
    int t,n;

    scanf("%d",t);

    while(t--)
        {
            scanf("%d",&n);
            int a[n];
            int temp =0,cn=0;
            bool flag =false;
            for(int i=0;i<n;i++)
                scanf("%d",a+i);

            for(int i=1;i<n;i++)
                {
                    for(int j=0;j<i;j++)
                        {
                            for(int k =j;k<i;k++)
                                {
                                    temp += a[k];
                                    if(temp==a[i])
                                        {
                                            cn++;
                                            flag= true;
                                            break;
                                        }

                                }
                                temp =0;
                                if(flag)
                                    break;

                        }

                        flag = false;

                }
                printf("%d\n",cn);

        }

}
