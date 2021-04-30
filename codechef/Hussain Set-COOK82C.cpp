#include<iostream>
#include<set>
#include<vector>
//#include<utility>
#include<algorithm>
//#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m,i,j=0,value,temp,ques;
    cin>>n>>m;
    set<ll>s;
    vector<ll>q(n);
    vector<ll>question(m);
    set<ll>::iterator it;
    vector<ll>::iterator vec;

    ///initial input
    for(i=0;i<n;i++)
    {
        cin>>value;
        s.insert(value);

    }

    ///ques
    for(i=0;i<m;i++)
    {
        cin>>ques;
        question[i]= ques;

    }


     vec= max_element(question.begin(),question.end());

    ///calculate
    for(j=0;j<=*vec;j++)
    {
        it = s.end();
        it--;
        //cout<<*it<<"\t";
        q[j] = *it;
        temp = *it/2;
        s.erase(*it);
        if(temp >0)
            s.insert(temp);


    }
    ///ques and ans


    for(i=0;i<m;i++)
    {
        cout<<q[question[i]-1]<<"\n";
    }
    return 0;


}
