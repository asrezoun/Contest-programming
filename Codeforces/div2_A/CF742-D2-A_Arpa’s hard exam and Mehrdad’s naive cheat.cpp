#include<cstdio>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);

    if(n == 0 )
        printf("%d",1);
    else if(n % 4 == 1)
        printf("%d",8);
    else if(n%4 == 2)
        printf("%d",4);
    else if(n%4 == 3)
        printf("%d",2);
    else if(n%4 == 0)
        printf("%d",6);

return 0;

}
