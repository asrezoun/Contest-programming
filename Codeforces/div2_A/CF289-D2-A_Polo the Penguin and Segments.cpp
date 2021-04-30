#include<cstdio>

using namespace std;
typedef long long ll;
int main()
{
    int n,k;
    int left,right,ans=0,result;
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++)
        {
            scanf("%d %d",&left,&right);

            ans += right -left +1;
            ans %= k;
        }

    result = (k-ans)%k;

    printf("%d",result);

    return 0;



}
