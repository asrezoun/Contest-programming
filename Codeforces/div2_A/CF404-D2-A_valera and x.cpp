#include<cstdio>
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    char a[n][n];
    char diagonal;
    bool flag = false;
    //printf("check\n");
    set<char>s;

    for(int i=0;i<n;i++)
        {   //printf("checkv\n");
            for(int j=0;j<n;j++)
                {
                    //scanf("%c",&a[i][j]);
                    cin>>a[i][j];
                    s.insert(a[i][j]);

                }
        }
       diagonal = a[0][0];
      // cout<<diagonal<<" "<<flag<<endl;

      int x=0,y=n-1;
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(i==j)
                        {
                            if(a[i][j]!= diagonal)
                                {
                                    flag = true;
                                    break;
                                }
                        }
                    else if(i==x && j==y)
                            {
                                if(a[i][j] != diagonal)
                                    {
                                        flag = true;
                                        break;
                                    }
                            }

                    else if(a[i][j]==diagonal)
                            {flag = true; break;}

                }
                if(flag)
                    break;
                x++;
                y--;
        }
 /*   for(int i=0;i<n;i++)
        {
            //cout<<a[i][i]<<" ";

            if(a[i][i]!= diagonal)
                {
                    flag = true;
                    break;
                }
        }

    int j=0,k=n-1;

    for(int i=0;i<n;i++)
        {
            if(a[j][k] != diagonal)
                {
                    flag = true;
                    break;
                }
            j++;
            k--;
        }*/
//cout<<s.size()<<endl<<flag<<endl;
        if(s.size() != 2 || flag)
            {
                cout<<"NO";
            }
        else
            cout<<"YES";
    return 0;
}
