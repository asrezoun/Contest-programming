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

    int x,ans=0;
    cin>>x;
    /*
    ans += x&1;
        ///bitmasking made simple
        let x = 5; x=101B 1 = 001B x&1 =001 again x =2=10B  x&1=0 means last digit ta niye kaaj korte partesi..

        ei jinish ta ans ans += x%2 diyo hoy ,, how>> 5%2 ==1 then 5/2=2; 2%2==0 again 1%2==1 so ans e duita 1 jog hoye 2.
        problem explanation....
        binary
        ...16 8 4 2 1
        5=>0  0 1 0 1
        least significant 1 ta 3rd day(2^2..>0 1 2 day) te jaye 4 ta hoye jabe.. to arekta add korlei hoye jacche eijonno 3rd day te
        arekta 1.

    cout<<ans;
    */
    while(x>0)
        {
            ans += x&1;
            x=x/2;
        }
        cout<<ans;
    return 0;
}
