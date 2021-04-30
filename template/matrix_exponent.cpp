#include<bits/stdc++.h>
using namespace std;

#define N 10
int ar[N][N],id[N][N];
void  multiplication(int a[][N],int I[][N],int dim)
    {
        int res[dim][dim];
        for(int i=0;i<dim;i++)
            {
                for(int j=0;j<dim;j++)
                    {
                        res[i][j] =0;
                        for(int k=0;k<dim;k++)
                            {
                                res[i][j] += a[i][k] * I[k][j];
                            }
                    }
            }

            ///restoring result in Identity
            for(int i=0;i<dim;i++)
                {
                    for(int j=0;j<dim;j++)
                        {
                            I[i][j] = res[i][j];
                        }
                }
    }
void calculatePower(int a[][N],int dim,int pwr)
    {
        for(int i=0;i<dim;i++)///identity
        {
            for(int j=0;j<dim;j++)
                {
                    if(i==j)
                        id[i][j]=1;
                    else
                        id[i][j]=0;
                }
        }
        ///multiplication
        ///brute force
        /*
        for(int i=0;i<pwr;i++)
            {
                multiplication(a,id,dim);
            }*/
        ///binary expo
        while(pwr)
            {
                if(pwr&1)
                    multiplication(a,id,dim); ///res = res*x;
                multiplication(a,a,dim); ///x = x*x;
                pwr = pwr>>1;
            }
        ///restore in original array
            for(int i=0;i<dim;i++)
            {
                for(int j=0;j<dim;j++)
                    {
                        a[i][j] = id[i][j];
                    }
                   // cout<<"\n";
            }
    }
void print(int a[][N],int dim)
    {
        for(int i=0;i<dim;i++)
            {
                for(int j=0;j<dim;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<"\n";
            }
    }
int main()
{
    int dim,pwr;
    cin>>dim>>pwr;

    ///take input
    for(int i=0;i<dim;i++)
        {
            for(int j=0;j<dim;j++)
                cin>>ar[i][j];
        }
    calculatePower(ar,dim,pwr);
    print(ar,dim);

}
