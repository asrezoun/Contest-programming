#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k=-1,sum=0;
    cin>>n;
    int a[n],b[n];
    vector<int>total;

    for(int i=0;i<n;i++)
    {
     cin>>a[i];
     }
    for(int i=0;i<n;i++)
       cin>>b[i];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    {
                        sum = a[i];
                    }
                else if(i<j)
                    {
                        sum = a[i]+a[j];

                        k=i;

                        while(++k<j)
                        {
                            sum+=b[k];

                        }
                    }
                else if(i>j)
                    {
                        sum = a[i]+a[j];

                        k =i;

                        while(1)
                        {
                            //cout<<"check\n";

                            if(k >= n-1)
                            {
                                k =-1;
                            }
                            k++;
                            if(k==j)
                            {
                             break;
                            }
                            sum += b[k];

                        }


                    }

                    total.push_back(sum);
                    sum=0;


            }


        }
    cout<<*max_element(total.begin(),total.end());

}
