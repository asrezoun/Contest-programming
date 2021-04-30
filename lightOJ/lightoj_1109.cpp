#include<bits/stdc++.h>
using namespace std;

int arr[1001];

int square(int arr[])
{
    for(int i =1;i<32;i++)
    {
        arr[i*i]=-1;
    }
}

int divisor(int arr[])
{
    int count=0,temp;
    for(int i=1;i<=1000;i++)
    {
        temp = sqrt(i);
        for(int j=1;j<=temp;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        arr[i] += count*2;
        count = 0;
    }
}

int main()
{
    int fnl[1001],l=2,casee,n;
    fnl[1]=1;
    cin>>casee;
    square(arr);
    divisor(arr);

    for(int i= 2;i<=64;i++)
    {
        for(int j = 1000; j>= 2; j--)
        {
            if(arr[j]== i)
            {
                fnl[l]=j;
                l++;
            }
        }

    }
    for(int k=1;k<=casee;k++)
    {
        cin>>n;
        cout<<"Case 1: "<<fnl[n]<<endl;
    }

}
