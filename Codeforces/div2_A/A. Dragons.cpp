#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
inline bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    int s,n;
    bool flag = false;

    cin>>s>>n;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
            if(v[i].first>=s)
                {
                    flag = true;
                    break;
                }
            s+=v[i].second;
        }
    if(flag)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    

}