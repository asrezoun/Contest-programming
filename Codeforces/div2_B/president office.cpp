#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<cmath>
#include<bitset>

using namespace std;

#define ll long long
#define ull unsigned long long
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
#define mx 1000001

//char c[105][105];
int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif

   //cout<<c[0][1];
   int n,m;
   char c;
   cin>>n>>m>>c;
   set<char>cSet;
   vector<pii>v;
   char ch[n+2][m+2];
   for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<m+2;j++)
            {
                ch[i][j]='.';
            }
    }
    //cout<<ch[0][2];
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                {
                    cin>>ch[i][j];
                    if(ch[i][j]==c)
                        {
                            v.pb(mp(i,j));
                        }

                }
        }
    //cout<<v.size()<<"\n";
   /* for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<m+2;j++)
            {
                //ch[i][j]='.';
                cout<<ch[i][j]<<" ";
            }
        cout<<"\n";
    }*/
    char up,dw,le,ri;
    int x,y;
    for(int i=0;i<v.size();i++)
        {
            x = v[i].first;
            y= v[i].second;

            up = ch[x-1][y];
            dw = ch[x+1][y];
            le = ch[x][y-1];
            ri = ch[x][y+1];
            if(up !='.' && up !=c)
                cSet.insert(up);
            if(dw !='.' && dw !=c)
                cSet.insert(dw);
            if(le !='.' && le !=c)
                cSet.insert(le);
            if(ri !='.' && ri !=c)
                cSet.insert(ri);
        }
    cout<<cSet.size()<<"\n";
}
