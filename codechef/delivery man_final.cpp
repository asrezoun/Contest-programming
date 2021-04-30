#include<cstdio>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;
typedef long ll;

inline bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
    {
            return p1.first>p2.first;
    }

int main()
{
    ll n,andyMax,bobMax,sum =0,index;
    scanf("%ld %ld %ld",&n,&andyMax,&bobMax);
    ll andyTip[n],bobTip[n];
    vector<pair<ll,ll>>pp(n);

    for(ll i=0;i<n;i++)
        {
            scanf("%ld",andyTip+i);
        }
    for(ll i=0;i<n;i++)
        {
            scanf("%ld",bobTip+i);
        }
    ///input done
    ///greedy parameter
    for(ll i=0;i<n;i++)
        {
            //pp.push_back({abs(andyTip[i]-bobTip[i]),i});
            pp[i].first = abs(andyTip[i]-bobTip[i]);
            pp[i].second = i;
        }
    sort(pp.begin(),pp.end(),compare);
    /// sorting done according to greedy parameter
    /// now calculate the max tip
    /*
    for(ll i=0;i<n;i++)
        {
            cout<<pp[i].first<<" "<<pp[i].second<<"\n";
        }*/

    for(ll i=0;i<n;i++)
        {
            index = pp[i].second;
            if(andyMax==0)
                {
                    sum += bobTip[index];
                }
            else if(bobMax==0)
                {
                    sum+=andyTip[index];
                }
            else
                {
                    if(andyTip[index]>=bobTip[index])
                        {
                            sum+=andyTip[index];
                            andyMax--;
                        }
                    else
                        {
                            sum += bobTip[index];
                            bobMax--;
                        }

                }

        }

        printf("%ld",sum);
        return 0;






}
