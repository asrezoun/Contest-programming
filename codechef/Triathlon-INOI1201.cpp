#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

typedef long long ll;

inline bool compare(pair <ll,ll> p1,pair <ll,ll> p2)
{
    return p1.second>p2.second;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 ll n,c,p,d,i,temp=0;
 cin>>n;
 vector<pair<ll,ll>>v(n);
 vector<ll>sum(n);

 for(i=0;i<n;i++)
 {
    cin>>c>>p>>d;
    v[i].first= c;
    v[i].second = p+d;

 }
 sort(v.begin(),v.end(),compare);

 for(i=0;i<n;i++)
 {
    sum[i]= temp + v[i].first + v[i].second;
    temp = temp + v[i].first;

 }

 auto it = max_element(sum.begin(),sum.end());
 cout<<*it;

return 0;



}
