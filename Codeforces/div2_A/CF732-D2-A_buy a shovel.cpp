#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int priceOfone,penny,n=1,temp=0;

    scanf("%d %d",&priceOfone,&penny);

    while(1)
    {
        temp = priceOfone*n;
        //cout<<temp<<" ";
        //cout<<"check ";
        if(temp%10==0)
            break;
        else if(temp%10==penny)
            break;
        else
            n++;

    }
    printf("%d",n);
    return 0;

}
