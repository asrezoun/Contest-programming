#include<iostream>
using namespace std;

int absfn(int s)
    {

        if (s>0)
            return s;
        else
            return -s;
    }

int main()
{
    int N,s=0,q=0,W=2,L;
    cin>>N;
    int firstPlayer[N],secondPlayer[N],lead[N],abs[N];

    for(int i=0;i<N;i++)
        {
            cin>>firstPlayer[i]>>secondPlayer[i];

            s = s+firstPlayer[i]-secondPlayer[i];
            lead[i] = s;

            abs[i] = absfn(s);

        }


        L = abs[0];
        for(int i =1;i<N;i++)
            {
                if(abs[i]>L)
                    {
                    L = abs[i];
                    q = i;
                    }

            }

        if (lead[q]>0)
                {
                    W = 1;

                }else
                    W = 2;

        cout<<W<< " "<<L;
        return 0;

}
