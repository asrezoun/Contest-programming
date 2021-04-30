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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int a=0,b=0,c=0;
    vector<pair<char,char>>p;
    for(int i=0;i<3;i++)
        {
            string s1;
            cin>>s1;

            if(s1[1]=='>')
                p.pb(mp(s1[0],s1[2]));
            else if(s1[1]=='<')
                p.pb(mp(s1[2],s1[0]));
        }
    for(int i=0;i<3;i++)
        {
            if(p[i].f=='A')
                a++;
            else if(p[i].f=='B')
                b++;
            else if(p[i].f=='C')
                c++;
        }
    //cout<<a<<b<<c;
    if(a&b&c)
    {
        cout<<"Impossible\n";
    }
    else
    {
        if(a==2)
            {
                if(b==0)
                    {
                        cout<<"BC";
                    }
                else if(c==0)
                    cout<<"CB";
                cout<<"A";
            }
        else if(b==2)
            {
                if(a==0)
                    {
                        cout<<"AC";
                    }
                else if(c==0)
                    cout<<"CA";
                cout<<"B";
            }
        else if(c==2)
            {
                if(a==0)
                    {
                        cout<<"AB";
                    }
                else if(b==0)
                    cout<<"BA";
                cout<<"C";
            }
    }


    return 0;
}
