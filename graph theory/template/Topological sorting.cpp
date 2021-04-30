#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000];
vector<int>res;
int inDegree[1000];

void kahn(int n)
    {
        queue<int>q;
        for(int i=1;i<=n;i++)
            {
                if(inDegree[i]==0)
                    q.push(i);
            }
        while(!q.empty())
            {
                int temp = q.front();
                res.push_back(temp);
                q.pop();

                for(int child:gr[temp])
                    {
                        inDegree[child]--;
                        if(inDegree[child]==0)
                            q.push(child);
                    }

            }
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<"  ";
    }
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].push_back(b);
            inDegree[b]++;
        }
    kahn(n);
    return 0;
}
/*
9 10
1 2
3 4
1 8
2 9
2 5
4 5
4 8
5 9
5 7
6 7
*/