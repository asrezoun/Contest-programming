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
ll a[2][2],id[2][2];
void multiplication(ll I[][2],ll magic[][2])
    {
        ll res[2][2];
        for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                    {
                        res[i][j]=0;
                        for(int k=0;k<2;k++)
                            {
                                ll temp;
                                temp = (I[i][k]%mod * magic[k][j]%mod)%mod;
                                res[i][j] = (temp%mod+res[i][j]%mod)%mod;
                            }
                    }
            }
            ///restore the result for res = res*x;
        for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                    {
                        I[i][j] = res[i][j];
                    }
            }
    }
ll calculateFn(ll f0,ll f1,ll pow)
    {
        ///corner cases
        if(pow==0)
            return f0;
        else if(pow==1)
            return f1;
        ///since 0 based index no need to do pow-1
        ///initaialize the magic array
        a[0][0] =0;
        a[0][1] = a[1][0]=a[1][1]=1;
        ///identity matrix
        id[0][0] = id[1][1] = 1;
        id[0][1] = id[1][0] = 0;

        ///calculate the magic matrix
        ///using fast expo
        while(pow)
            {
                if(pow & 1)
                    multiplication(id,a); /// res = res *x;
                multiplication(a,a);
                pow = pow>>1;
            }

        return (f0*id[0][0] + f1 * id[0][1])%mod; ///forgot to add this mod
    }
int main() {
    fastio;
    /*
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif*/
    int t;
    cin>>t;
    while(t--)
        {
            /// notice its 0 based
            ll f0,f1,fn;
            cin>>f0>>f1>>fn;
            cout<<calculateFn(f0,f1,fn)<<"\n";
        }

    return 0;
}
