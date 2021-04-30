#include<cstdio>
#include<set>

using namespace std;
typedef long long ll;
int main()
{
    set<ll>color;
    ll value,need;

    for(int i=0;i<4;i++)
        {
            scanf("%lld",&value);
            color.insert(value);
        }
    need = 4-color.size();
    printf("%d",need);

    return 0;

}


