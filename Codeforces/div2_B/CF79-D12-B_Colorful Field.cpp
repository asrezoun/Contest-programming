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
///not solved
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,k,t,a,b;
    cin>>n>>m>>k>>t;
    vector<ll>w;

    for(int i=0;i<k;i++)
        {
            cin>>a>>b;
            ll temp = (a-1)*m+(b-1);
            w.push_back(temp);
        }
    sort(w.begin(),w.end());
    int j;
    int flag;
    for(int i=0;i<t;i++)
        {
            cin>>a>>b;
            int block= (a-1)*m+(b-1);
            flag=0;

            for( j=0;j<w.size();j++)
                {
                    if(block==w[j])
                        {
                            cout<<"Waste\n";
                            flag =1;
                            break;

                        }
                    if(w[j]>block)
                        {
                            
                            break;
                        }
                }
            if(flag==0)
                {
                    block -= j;
                    if(block%3==0)
                        cout<<"Carrots\n";
                    else if(block%3==1)
                        cout<<"Kiwis\n";
                    else if(block%3==2)
                        cout<<"Grapes\n";
                }
            
        }



    return 0;
}
