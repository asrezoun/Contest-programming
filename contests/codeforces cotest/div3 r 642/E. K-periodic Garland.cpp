#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
#include<cstdio>1
using namespace std;

typedef long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;


    cin>>t;
    while(t--)
        {
            ll n,k,len,lastOne,checkpoint;
            cin>>n>>k;
            char ch[n];
            scanf("%s",&ch);
            len = strlen(ch);
            lastOne=0;
            checkpoint = LONG_MAX;
            for(ll i=0;i<len;i++)
                {
                    if(ch[i] == '1')
                        {
                        lastOne = i;
                        checkpoint = min(checkpoint,lastOne);
                        }
                }
               // cout<<lastOne<<" "<<checkpoint;

                long loop = checkpoint;
                long change =0;
            for(ll i=loop+1;i<=lastOne;i++)
                {
                   // cout<<ch[i];

                    if(ch[i]=='1')
                        {
                            if(i - checkpoint!=k)
                                change++;
                            if(i - checkpoint==k)
                                checkpoint =i;
                        }
                    else if(ch[i]=='0')
                        {
                            if(i - checkpoint==k)
                                {
                                    change++;
                                    checkpoint = i;
                                }

                        }
                    //cout<<"kisomossa"<<"\n";
                }

                cout<<change<<"\n";


        }
        return 0;
}
