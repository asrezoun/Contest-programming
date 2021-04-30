#include<cstdio>
#include<set>
#include<iostream>

using namespace std;
typedef long long ll;
int main()
{
    int n,k,cnt=0;

    ll  value,rem;
    scanf("%d %d",&n,&k);
    bool flag =true;

    set<int>s;

    while(n--)
        {
            scanf("%lld",&value);


            while(1)
                {

                    rem = value%10;

                    if(rem<=k)
                    {
                        s.insert(rem);
                    }

                    value = value/10;
                    if(value==0)
                        {
                            break;
                        }

                }
                if(s.size()==k+1)
                    //cout<<s.size()<<" "<<k+1;
                    cnt++;

                s.clear();


        }
        printf("%d",cnt);
        return 0;
}
