#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>

using namespace std;

#define ll long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    string s;
    cin>>s;
    int cnt=0;
    int len = s.size();

    if(len==0)
        {cout<<0;return 0;}
    for(int i=0;i<len;i++)
        {
            if(s[i]=='1')
                cnt++;
        }
    //cout<<"lenth "<<len<<"\n";
    //cout<<"cnt "<<cnt<<"\n";
    if(cnt>1)
        cout<<(len+1)/2;
    else
        cout<<len/2;

    return 0;
}








