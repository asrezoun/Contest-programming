#include<bits/stdc++.h>
using namespace std;
int ar[100];
int findParent(int n)
{
    if(n== ar[n])
    return n;

    return findParent(ar[n]);
}
void union(int a, int b)
{
    int x, y;
    x = findParent(a);
    y = findParent(b);

    if(x==y)///means already same set
        return;
    else
    {
        ar[x]=y;
    }
    
}
int main()
{
    int n;
    cin>>n;
    //int ar[n+1];
    for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
   cout<<findParent(5);
}
//5
//3 2 2 5 2