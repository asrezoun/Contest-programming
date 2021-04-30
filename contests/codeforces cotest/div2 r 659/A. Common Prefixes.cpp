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
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    int ar[105];
    string s="abcdefghijklmnopqrstuvwxyz";
    while(t--)
        {
            for(int i=0;i<105;i++)
                ar[i]=0;
            int n;
            cin>>n;
            int z=1;
            for(int i=1;i<=n;i++)
                {
                    cin>>ar[i];
                }
           
                    for(int i=1;i<=n-1;i++)
                        {
                            if(ar[i]==0)
                                {
                                    int temp = (z%26)+1;
                                    z++;
                                    cout<<s[temp]<<"\n";
                                    continue;

                                }
                            for(int j=0;j<ar[i];j++)
                                cout<<s[j];
                            cout<<"\n";
                            
                        }
                    int x=n-1;
                    bool flag;
                    if(ar[x]<ar[x+1])
                        flag=true;
                    int last = max(ar[x],ar[x+1]);
                    for(int i=0;i<2;i++)
                        {
                            if(ar[x]==0)
                                {
                                    int temp = (z%26)+1;
                                    z++;
                                    cout<<s[temp]<<"\n";
                                 
                                    x++;
                                    continue;
                                }
                            if(flag)
                            {
                            for(int j=0;j<last;j++)
                                cout<<s[j];
                            cout<<"\n";
                            }
                            else
                            {
                             for(int j=0;j<ar[x];j++)
                                cout<<s[j];
                            cout<<"\n";   
                            }
                        
                            x++;
                        }
               // cout<<"==========\n";
        }

    return 0;
}
