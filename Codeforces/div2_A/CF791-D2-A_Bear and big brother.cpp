#include<cstdio>

using namespace std;


int main()
{
    int a,b,year=0;

    scanf("%d %d",&a, &b);

    while(1)
    {
        a = 3*a;
        b = 2*b;
        year++;
        if(a>b)
            break;
    }
    printf("%d",year);


}
