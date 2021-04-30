#include <iostream>
using namespace std;
int S[1000],T[1000],Ls[1000],Ts[1000];
int main() {
	// your code goes here

	int N,Si,Ti,k=0,m=0,x,y,W,L;


	cin >>N;
	for(int i=1;i<=N; i++)
	    {
	        cin>>Si>>Ti;
	        S[i]=S[i-1]+Si;
	        T[i]=T[i-1]+Ti;

	        if(S[i]>T[i])
	        {
                Ls[k++] = S[i] - T[i];
	        }else
                {
                    Ts[m++] = T[i] - S[i];
                }
	    }
	    x = Ls[0];
	    y = Ts[0];

	    for(int i=1;i<N;i++)
            {
                if(Ls[i]>x)
                    x = Ls[i];
                if(Ts[i]>y)
                    y = Ts[i];
            }
        if(x>y)
            {
                W = 1;
                L = x;
            }else
                {
                    W = 2;
                    L = y;
                }
        cout<< W <<" "<<L;

	return 0;
}
