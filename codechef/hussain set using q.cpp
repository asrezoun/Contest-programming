#include<cstdio>
#include<queue>
#include<algorithm>



using namespace std;

typedef long long ll;

int main()

{
    ll n,m,question,i,x=1;
    scanf("%lld %lld",&n,&m);
    ll ar[n+10];
    queue<ll>q1,q2;

    for(i=0;i<n;i++)
        scanf("%lld",ar+i);

    sort(ar,ar+n);

    for(i=n-1;i!=-1;i--)
        q1.push(ar[i]);

    i =0;

    while(m--)
    {
        scanf("%lld",&question);
        for(;i<question;i++)
            {
                if(q1.front()>=q2.front())
                    {
                        x = q1.front();
                        q1.pop();
                    }
                else
                    {
                        x=q2.front();
                        q2.pop();

                    }
                if(x/2)
                    q2.push(x/2);


            }
            printf("%lld\n",x);


    }
    return 0;


}
