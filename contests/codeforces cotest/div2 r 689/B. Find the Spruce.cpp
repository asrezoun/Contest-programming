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
#include<queue>

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

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;

    while(t--)
        {
            int n,m,cnt=0;
            cin>>n>>m;
            char s[n+1][m+1];
            char c;
            vector<pii>p;

            for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=m;j++)
                        {
                            cin>>c;
                            s[i][j]=c;
                            if(c=='*')
                               { cnt++;
                                 p.push_back(mp(i,j));
                               }
                        }
                }

            ///input done
            
                for(int k=0;k<p.size();k++)
                    {
                        int x = p[k].first;
                        int y = p[k].second;
                        bool flag = false;
                        int check=0;
                        for(int i = x+1;i<=n;i++)
                            {
                                check++;
                                int secCheck=0;
                                for(int j=y-1;j<=m;j++)
                                    {
                                        if(i>n || j<1 || s[i][j]=='.')
                                            {
                                                flag= true;
                                                break;
                                            }
                                        if(s[i][j]=='*')
                                            secCheck++;
                                        if(secCheck==(check*2)+1)
                                            {cnt++; break;}

                                    }
                                    y--;
                                    if(flag)
                                        break;
                            }
                    }
                cout<<cnt<<"\n";


        }

    return 0;
}
