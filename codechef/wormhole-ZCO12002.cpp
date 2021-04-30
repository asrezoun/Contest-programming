#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<climits>


using namespace std;

inline bool compare(pair <long long int,long long int> p1, pair <long long int, long long int> p2) {
    return p1.first < p2.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,x,y,temp=0,min_time=INT_MAX ,i,startTime,endTime;
    cin>>n>>x>>y;
    vector<pair<long long int, long long int>>contest(n);
    vector<long long int>v(x);
    vector<long long int>w(y);



    for(i=0;i<n;i++)
    {
        cin>>startTime>>endTime;
        contest[i].first=startTime;
        contest[i].second=endTime;

    }
    sort(contest.begin(),contest.end());

    for(i=0;i<x;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(i=0;i<y;i++)
    {
        cin>>w[i];
    }
    sort(w.begin(),w.end());

    vector<long long int>::iterator t1=v.begin(),t2=w.begin();

    for(i=0;i<n;i++)
    {
        t1 = upper_bound(v.begin(),v.end(),contest[i].first);
        t1--;
        t2 = lower_bound(w.begin(),w.end(),contest[i].second);

        if(*t2>*t1)
        {
            temp = *t2-*t1+1;

            if(temp<min_time)
            {
                min_time =temp;
            }

        }

    }

cout<<min_time;
return 0;



}
