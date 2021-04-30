#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen( "input.txt" , "r" , stdin );
    int t;
    cin>>t;

    while(t--)
        {
            int n,k;
            cin>>n>>k;
            //int ar[n];
            vector<pair<int,int>>v;
            vector<int>res;

            for(int i=0;i<n;i++)
                {
                    int x,y;
                    cin>>x>>y;
                    v.push_back(make_pair(x,y));
                }
            
            for(int i=0;i<n;i++)
                {
                    bool check = true;
                    int lowres = INT_MIN;
                    for(int j=0;j<n;j++)
                        {
                            if(i==j)
                            {
                                check = false;
                                continue;
                            }
                            check = true;
                            int temp = abs(v[i].first- v[j].first) + abs(v[i].second - v[j].second);
                            lowres = max(temp,lowres);
                            
                        }
                 
                    if(check)
                        {
                            //cout<<i<<"\n";
                            res.push_back(lowres);
                        }
                }
               
                        if(n<=3)
                        {
                        bool flag = false;
                        for(int i=0;i<res.size();i++)
                            {
                                if(res[i]<=k)
                                    flag=true;
                            }
                        if(flag)
                            cout<<"1\n";
                        else
                        {
                            cout<<"-1\n";
                        }
                        }
                        else
                        {
                            bool flag2 = true;
                            for(int i=0;i<res.size();i++)
                                {
                                    if(res[i]>k)
                                        flag2=false;
                                }
                            if(flag2)
                                cout<<"1\n";
                            else
                            {
                                cout<<"-1\n";
                            }
                            
                        }
                        
                        

                
                

        }
}