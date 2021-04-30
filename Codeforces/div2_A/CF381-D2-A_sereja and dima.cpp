#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    int n,sereja=0,dima=0;
    scanf("%d",&n);
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v.front()>v.back())
                    {
                        sereja +=v.front();
                        v.erase(v.begin());
                    }
                else
                    {
                        sereja += v.back();
                        v.erase(v.end()-1);

                    }
            }
            else
            {
                if(v.front()>v.back())
                    {
                        dima +=v.front();
                        v.erase(v.begin());
                    }
                else
                    {
                        dima += v.back();
                        v.erase(v.end()-1);

                    }

            }

        }
    printf("%d %d",sereja,dima);
    return 0;
}
