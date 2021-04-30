#include<cstdio>
#include<iostream>

using namespace std;

int gcd(int a, int b)
    {
        if(a==0)
            return b;
        gcd(b%a,a);
    }

int main()
{
    int y,w,maxx,a,b=6,d;

    scanf("%d %d",&y,&w);

    maxx = w>y?w:y;
    a = b-maxx+1;

    //printf("%d",a);
    //cout<<gcd(3,10);

    d = gcd(a,b);
    a = a/d;
    b = b/d;
    printf("%d/%d",a,b);

    return 0;

}
