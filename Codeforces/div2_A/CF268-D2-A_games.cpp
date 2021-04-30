#include<cstdio>
#include<vector>
#include<utility>


using namespace std;


int main()
{

    int home, away,n,guest =0;

    scanf("%d",&n);
    vector<pair<int,int>>team(n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&home,&away);
        team[i].first = home;
        team[i].second=away;
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(i==j)
                        continue;
                    if(team[i].first==team[j].second)
                        guest++;
                }

        }
    printf("%d",guest);
    return 0;


}
