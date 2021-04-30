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
#define si(n)   scanf("%d",&n)
#define sl(n)   scanf("%lld",&n)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main() {

    fastio;
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    int n, firstR=-1,firstL=-1,LastR=-1,LastL=-1;
    string s;
    cin>>n;
    cin>>s;



    for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
                {
                    if(firstR==-1)
                        firstR = i+1;

                    LastR = i+1;
                    //cout<<"RChek";
                }
            else if(s[i]=='L')
                {
                    if(firstL==-1)
                        firstL = i+1;

                    LastL = i+1;
                }
        }
        if(firstL==-1)///only R
            cout<<firstR<<" "<<LastR+1;
        else if(firstR==-1)///only L
            cout<<LastL<<" "<<firstL-1;
        else
            cout<<firstR<<" "<<LastR;

    return 0;
}





