#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;


    cin>>t;

    while(t--)
        {
            int a,b,square,mini,maxx;
            cin>>a>>b;
            //scanf(" %d %d",&a,&b);
            //getchar();
            /*
            if(a%2==0 || b%2==0)
                {
                    square = min(a,b);
                    square = 2 *square;

                }
            else if(a==1 && b==1)
                {
                 square = min(a,b);
                 square = 2 *square;
                }
            else
                {
                    square = max(a,b);
                }


            square = square *square;
*/          mini = min(a,b);
            maxx = max(a,b);

            mini = 2*mini;
            mini = mini*mini;
            maxx = maxx*maxx;
            square = max(maxx,mini);
            cout<<square<<"\n";


        }

return 0;
}
