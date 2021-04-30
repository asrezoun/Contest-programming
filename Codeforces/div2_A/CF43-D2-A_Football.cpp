#include<cstdio>
#include<string>
#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
	cin>>T;
	int cnt1 = 0;
	int cnt2 = 0;
	string temp,t1,t2;
	cin>>temp;
	t1= temp;
	cnt1++;
	for(int i=1;i<T;i++)
	{
		cin>>temp;
		if(temp==t1)
		{
			cnt1++;
		}
		else
		{
			t2 = temp;
			cnt2++;
		}
	}
	if(cnt1>cnt2)
		cout<<t1<<endl;
	else
		cout<<t2<<endl;
}

/*
    int n,maxx=0;
    scanf("%d",&n);
    string s,ans;
    unordered_map<string,int>mp;

    while(n--)
        {
            cin>>s;
            mp[s]++;
        }
    for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>maxx)
                {
                    maxx = it->second;
                    ans = it->first;
                }
        }
        cout<<ans;

/*
    int n,first=0,sec=0;
    string c1,c2,c3;
    bool flag = true;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            if(i==0)
                {cin>>c1;first++;continue;}

            cin>>c3;
                if(c3 != c1 && flag)
                    {
                        flag = false;
                        c2 = c3;
                    }
            if(c3==c1)
                first++;
            else
                sec++;



        }
        if(first>sec)
            cout<<c1<<"\n";
        else
           cout<<c2<<"\n";

return 0;
}
*/


